# Laboratorio di informatica 1

### Prof. Stefano Carrazza - Corso C

**Riassunto:** Per la seduta odierna proponiamo un primo contatto al sistema
operativo Linux con istruzioni e esercizi per l'utilizzo dell'ambiente desktop
e i rispettivi strumenti utili per il corso di informatica.

## Esercizio 1 - Registrazione laboratorio

Per loggarsi sulle macchine del laboratorio di calcolo del dipartimento di fisica dovete registravi via:

[https://studenti.fisica.unimi.it/registrazione](https://studenti.fisica.unimi.it/registrazione).

## Esercizio 2 - Ambiente di sviluppo

Preparare l'ambiente di sviluppo già installato sulle machine del laboratorio
consiste nell'editor `code`:

- [https://code.visualstudio.com/](https://code.visualstudio.com/)
- [https://code.visualstudio.com/docs/setup/windows](https://code.visualstudio.com/docs/setup/windows)
- [https://code.visualstudio.com/docs/setup/mac](https://code.visualstudio.com/docs/setup/mac)

## Esercizio 3 - Il terminale e bash

Per programmare utilizzeremmo un emulatore di terminale per Linux basato sul
linguaggio per comandi chiamato `bash`.

- Cercate e aprite il programma chiamato `Terminal`.
- Provate a lanciare il comando bash che semplicemente restituisce un vostro
  input direttamente su schermo.
- Scrivete

    ```
    echo "Hello World!"
    ```

    seguito dal tasto `Invio/Enter`.

    *Nota: tutti i comandi bash devono essere seguiti dal tasto `Invio` affinché
    siano eseguiti.*

- Per conoscere i comandi più comuni in bash potete inviare il comando:

  ```
  help
  ```

- Per conoscere dettagli dei comandi potete usare il comando `man` che apre
  la pagina del manuale bash con i dettagli del comando, e.g.:

  ```
  man echo
  ```

  per chiudere la pagina del manuale premere semplicemente il tasto `q` sulla tastiera.

- Potete usare le frecce su e giù per recuperare i comandi che avete già utilizzati.

- Per ulteriori informazioni ed esempi potete visitare: [questo link](https://it.wikipedia.org/wiki/Bash)

*Nota: esistono altri linguaggi per comandi ma ormai bash è uno dei più popolari.*

## Esercizio 4 - Il file system

I dati contenuti nel disco fisso del sistema sono strutturati in cartelle
(*directories*). In generale, nei sistemi UNIX la directory di base, chiamata
**root** (da non confondere con il nome dell'account che a privilegi
amministrativi), viene indicata con il simbolo `/`. Dentro questa cartella
troviamo sottocartelle che contengono programmi, dati e configurazioni di
sistema che permettono al computer di funzionare, e.g. `/usr/`, `/bin/`,
`/home/`, ecc.

 Tutti gli utenti hanno privilegi di scrittura e lettura per i files che si
 trovano dentro la propria directory **home**. Per esempio, l'utente chiamato
 `john` ha come cartella home: `/home/john`.

Proponiamo adesso una lista di comandi/esercizi utili per navigare e creare
files. Per tutti i comandi resta sempre valido l'utilizzo del comando `man`
oppure l'opzione `<comando> --help`.

1. Per visualizzare il nome della directory in cui ci troviamo, usiamo il comando:

      ```
      pwd
      ```

      (print working directory)

2. Per elencare tutti i files e cartelle presenti nella directory in cui ci troviamo:

      ```
      ls
      ```

      (list). Se invece usiamo il comando `ls -l` (cioè `ls` con l'opzione `-l`)
      molti dettagli saranno mostrati come proprietario, permessi di accesso,
      dimensione file, ecc.

3. Per creare una nuova cartella:

      ```
      mkdir <nome_nuova_cartella>
      ```

      (make directory) dove per `<nome_nuova_cartella>` intendiamo il nome della cartella che volete creare. Se aggiungiamo l'opzione `mkdir -p` tutte le parent directories
      saranno create.

4. Per creare un file vuoto:

      ```
      touch <nome_file>
      ```

5. Per cancellare un file o cartella:

      ```
      rm <file>
      # oppure per cartelle (opzione -r recursive rm):
      rm -r <directory>
      ```

      dove comando remove è stato chiamato con l'opzione `-r` (recursive). Fare
      attenzione all'utilizzo di `*`, i.e. `rm -rf *` significa cancellare tutti
      i files e cartelle presenti nella directory attuale.

6. Per navigare tra cartelle:

      ```
      cd <cartella>
      ```

      (change directory) oppure se vogliamo entrare nella cartella precedente:

      ```
      cd ..
      ```

      se usate `cd` questo vi portera alla vostra home. Invece `cd -` vi porterà
      alla cartella che avete visitato precedentemente.

7. Per vedere il contenuto di in file senza aprirlo:

      ```
      less <file>
      more <file>
      cat <file>
      ```

      il comando `cat` viene inoltre impiegato per concatenare files, e.g. `cat file1 file2 > file3`.

Come esercizio creare la struttura cartelle seguente:

```
  /home/<username>/corso_di_informatica
    |- Lezione1
          |- data.txt # lasciarlo vuoto
```

## Esercizio 5 - Copiare e spostare files

Per copiare e spostare files utilizziamo i seguenti comandi:

- Per copiare:

   ```
   cp <file_da_copiare> <directory_in_cui_copiare>
   ```

  (copy). Se vogliamo copiare una cartella basta aggiungere l'opzione recursive, i.e. `cp -r`.
- Se vogliamo muovere un file oppure rinominare un file, usiamo:

   ```
   mv <file> <nuovo_nome_file>
   ```

 Ricordare che le directories possono essere rappresentate da notazione relativa rispetto
 alla cartella attuale sia in notazione assoluta.

Provate a copiare il file `data.txt` creato nell'esercizio precedente dentro la
cartella `Lezione1` e poi cambiate il suo nome da `data.txt` a `README.md`.

## Esercizio 6 - Editor di testo

Esistono innumerevoli programmi per editare files su Linux, che capiscono il tipo
di contenuto in base al suffisso del file. Per esempio un file con suffisso `.txt` è
considerato come puro testo, invece un file con `.cc` è un file di programmazione in C++, quindi si attiveranno dei colori per la sintassi utilizzata.

Sono disponibili su tutte le macchine i seguenti editor di testo:

- `gedit`: editor generale, user-friendly, molto facile e intuitivo da usare.
- `vim`: editor molto flessibile e con supporto a innumerevoli plug-ins. Richiede tempo
  per imparare ad utilizzare in modo proficuo.
- `emacs`: editor molto flessibile, contestualmente simile a vim, richiede però tempo
  per imparare ad utilizzare in modo proficuo.
- `code`: editor moderno, tra IDE e editor.

Come esercizio proviamo a creare un file usando code:

1. aprire il terminale, scegliere una cartella dentro la propria home e eseguire:

      ```
      code file1.txt
      ```

      scrivere un contenuto qualunque, salvare il file e chiudere `code`.

2. controllare il contenuto di questo nuovo file con `cat`.

3. Cancellare `file1.txt`.

A questo punto proviamo a creare un file per codice in C++:

1. aprire il terminale e eseguire

      ```
      code file.cc
      ```

2. scrivere la seguente riga

      ```c++
      #include <iostream>
      ```

      noterete che si attiveranno dei colori diversi per ogni parola: `code` ha
      riconosciuto che il vostro file contiene sintassi del C++.

3. Cancellare `file.cc`.

Con la tastiera italiana i seguenti simboli utili per programmazione sono:

```lang-none
{ = Alt Gr + Shift + è
} = Alt Gr + Shift + +
~ = Alt Gr + ì
```

## Esercizio 7 - Clonare con git

Git è uno strumento utilissimo quando si programma, permette di salvare i propri
files su server remoti, mantenere lo storico delle modifiche e lavorare in modo collaborativo. Per esempio [https://github.com](https://github.com)
è molto popolare per progetti open-source a grande scala.

Spiegare l'utilizzo di `git` è al di fuori dello scopo di questo tutorial, ma se avete tempo studiarlo è ottima idea che vi aiuterà a salvare i vostri codici e dati in maniera efficiente.

A titolo di esempio potete scaricare questa guida e tutto il materiale del corso semplicemente facendo:

```
git clone https://github.com/scarrazza/informatica2023.git
```

e poi entrare nella cartella `informatica2023` con

```
cd informatica2023
```

Ogni settimana le nuove lezioni saranno pubblicate sul repositorio `git`, per ottenere
gli aggiornamenti basterà effettuare un `pull`, i.e.:

```
cd informatica2023
git pull
```

A questo punto provare ad aprire i documenti appena clonati con `code`, e nel caso di PDFs con `evince`.

## Esercizio 8 - Accesso remoto alle macchine del laboratorio

Siccome programmare richiede allenamento e studio, vi capiterà di lavorare su
diverse macchine, sia in laboratorio che sul vostro computer personale.

Detto ciò, esistono metodi per la copia di files da remoto utilizzando la rete
usando `ssh` e `scp`. Da notare però che per motivi di sicurezza le connessioni
dirette da remoto non sono sempre possibili dovuti a regole firewall oppure la
mancanza di software opportuno per tali operazioni.

- Per accedere da remoto ad un computer raggiungibile sulla rete usiamo il comando:

  ```
  ssh <username>@<indirizzo_computer>
  ```

  dove per `<indirizzo_computer>` intendiamo l'IP oppure il suo dominio da rete,
  mentre `<username>` il vostro nome utente. Questo metodo vi permetterà di
  entrare nella macchina remota e lavorare. Eseguendo il comando `ssh -X
  <username>@<indirizzo_computer>` sarete capaci di inoltrare l'output delle
  applicazioni grafiche da remoto.

- Loggarsi sulle macchine del laboratorio di calcolo del dipartimento di fisica usando `ssh <username>@tolab.fisica.unimi.it`, dove `<username>` è il vostro nome utente.

- Uscire dalle macchine del laboratorio con il `exit`.

## Esercizio 9 - Copia dei files

Per copiare files da remoto utilizziamo il comando `scp`:

  ```
  scp <username>@<indirizzo_computer>:<file> <file_destinazione>
  ```

  Questo comando funziona in modo analogo a `cp`, quindi si possono copiare
  intere cartelle aggiungendo l'opzione `cp -r`.

Loggarsi sulle macchine del laboratorio di calcolo del dipartimento di fisica usando ssh e copiare i propri files.

1. Loggarsi con `ssh <username>@tolab.fisica.unimi.it`.

2. Verificare il contenuto della propria home directory.

3. Copiare alcuni files e folders tra la vostra macchina e tolab usando `scp` e `scp -r` rispettivamente.
