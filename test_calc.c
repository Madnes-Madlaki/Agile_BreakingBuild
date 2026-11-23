#include <stdio.h>
#include "calc.h"

static int failures = 0;

#define CHECK(name, condition)                         \
    do {                                               \
        if (condition) {                               \
            printf("PASS: %s\n", name);                \
        } else {                                       \
            printf("FAIL: %s\n", name);                \
            failures++;                                \
        }                                              \
    } while (0)

int main(void) {
    double r = 0;

    CHECK("add", add(2, 3) == 5);
    CHECK("subtract", subtract(5, 3) == 2);
    CHECK("multiply", multiply(4, 3) == 12);
    CHECK("divide", divide(10, 2, &r) == 0 && r == 5);
    CHECK("divide by zero", divide(1, 0, &r) == -1);

    if (failures > 0) {
        printf("%d test(s) failed\n", failures);
        return 1;
    }
    printf("All tests passed\n");
    return 0;
}
