// implementazione
#include "funzioni.h"

//_________________________________
void scambia1(double &a, double &b)
{
  double dep = b;
  b = a;
  a = dep;
}

//_________________________________
void scambia2(double *a, double *b)
{
  double dep = *b;
  *b = *a;
  *a = dep;
}
