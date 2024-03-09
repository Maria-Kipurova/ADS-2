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
    double result = 0;
    for (uint16_t n = 0; n < count; n++) {
        result += calcItem(x, n);
    }
    return result;
}

double sinn(double x, uint16_t count) {
    double result = 0;
    for (uint16_t n = 0; n < count; n++) {
        result += (n % 2 == 0 ? 1 : -1) * calcItem(x, 2 * n + 1);
    }
    return result;
}

double cosn(double x, uint16_t count) {
    double result = 0;
    for (uint16_t n = 0; n < count; n++) {
        result += (n % 2 == 0 ? 1 : -1) * calcItem(x, 2 * n);
    }
    return result;
}
