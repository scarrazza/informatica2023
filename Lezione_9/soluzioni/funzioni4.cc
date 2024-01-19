#include <iostream>
#include <fstream>
#include "funzioni4.h"
using namespace std;

#define NMAX 50000

// load events from file
misure* load_misure(string const& filename, int &ntotal)
{
    ifstream infile;
    infile.open(filename.c_str());
    if (!infile.good())
        throw runtime_error("Cound not open file.");

    misure *read = new misure[NMAX];
    for (;;)
    {
        infile >> read[ntotal].t
               >> read[ntotal].vx
               >> read[ntotal].vy
               >> read[ntotal].vz
               >> read[ntotal].K;
        read[ntotal].massa = 0;
        if (infile.eof()) break;
        ntotal++;
    }

    // resize array for delivery
    misure *out = new misure[ntotal];
    for (int i = 0; i < ntotal; i++)
        out[i] = read[i];
    delete[] read;

    return out;
}

void fill_mass(misure *m, int ntot)
{
    for (int i = 0; i < ntot; i++)
    {
        const double v = m[i].vx*m[i].vx + m[i].vy*m[i].vy + m[i].vz*m[i].vz;
        m[i].massa = 2*m[i].K / v;
    }
}

void print_misure(misure *m, int ntot)
{
    for (int i = 0; i < ntot; i ++)
    {
        cout << m[i].t << " "
             << m[i].vx << " "
             << m[i].vy << " "
             << m[i].vz << " "
             << m[i].K <<  " "
             << m[i].massa << endl;;
    }
}

void store_masses(misure *m , int ntot)
{
    fstream out;
    out.open("masses.dat", ios::out);
    if (!out.good())
        throw runtime_error("Cound not open file.");

    for (int i = 0; i < ntot; i++)
        out << m[i].massa << endl;
    out.close();
}
