// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"

double pown(double value, uint16_t n) {
    double k = 1;
    while (n > 0) {
        k = value * k;
        n--;
    }
    return k;
}

uint64_t fact(uint16_t n) {
    uint64_t k = 1;
    for (int i = 1; i <= n; ++i) {
        k *= i;
    }
    return k;
}

double calcItem(double x, uint16_t n) {
    double k = pown(x, n) / fact(n);
    return k;
}

double expn(double x, uint16_t count) {
    uint16_t x1 = abs(count);
    double xexe = 1;
    if (count == 0)
        return 0;
    for (uint16_t i = 1; i <= x1; ++i) {
        xexe += calcItem(x, i);
    }
    return xexe;
}

double sinn(double x, uint16_t count) {
    uint16_t x1 = abs(count);
    double k = 0;
    if (count == 0)
        return 0;
    for (uint16_t i = 1; i <= x1; ++i) {
        k += pown(-1, i - 1) * pown(x, 2 * i - 1) / fact(2 * i - 1);
    }
    return k;
}

double cosn(double x, uint16_t count) {
    uint16_t x1 = abs(count);
    double k = 0;
    if (count == 0)
        return 0;
    for (uint16_t i = 1; i <= x1; ++i) {
        k += pown(-1, i - 1) * pown(x, 2 * i - 2) / fact(2 * i - 2);
    }
    return k;
}
