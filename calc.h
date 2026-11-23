#ifndef CALC_H
#define CALC_H

double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);

/* Returns 0 on success and stores the result; returns -1 if b is zero. */
int divide(double a, double b, double *result);

#endif
