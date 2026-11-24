#include "calc.h"

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return b - a;
}

double multiply(double a, double b) {
    return a * b;
}

int divide(double a, double b, double *result) {
    if (b == 0) {
        return -1;
    }
    *result = a / b;
    return 0;
}
