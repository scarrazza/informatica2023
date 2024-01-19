#include "funzioni3.h"
#include <cmath>
using namespace std;


double distance(point2d const& p)
{
  return sqrt(pow(p.x-0.5, 2) + pow(p.y-0.5, 2));
}
