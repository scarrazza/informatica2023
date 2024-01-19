
#include <string>

// Interface for gruppo
struct misure {
    int t;
    double vx, vy, vz, K, massa;
};

// load events from file
misure* load_misure(std::string const& filename, int &ntotal);

// fill massa
void fill_mass(misure *m, int ntot);

// print measures
void print_misure(misure *m, int ntot);

// print masses to file
void store_masses(misure *m , int ntot);
