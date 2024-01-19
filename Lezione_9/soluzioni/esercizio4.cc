#include <iostream>
#include "funzioni4.h"
using namespace std;

int main()
{
    // Punto 1i
    int ntot = 0;
    misure* m = load_misure("../data.dat", ntot);

    cout << "Punto 1" << endl;
    cout << "i)   Total points   = " << ntot << endl;
    cout << "ii)  Descrizione dei punti (t, vx, vy, vz, k): " << endl;
    print_misure(m, ntot);

    // Punto 4
    cout << "Punto 2" << endl;
    cout << "i & ii) computing masses..." << endl;
    fill_mass(m, ntot);
    cout << "iii) printing description" << endl;
    print_misure(m, ntot);
    store_masses(m, ntot);

    // clear memory
    delete[] m;

    return 0;
}
