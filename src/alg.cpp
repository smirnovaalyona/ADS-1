// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
// вставьте код функции
if (value < 2) return false;
if (value == 2) return true;
for (uint64_t i = 2; i <= sqrt(value); i++) {
if (!(value%i)) {
return false;
}
}
return true;
}

uint64_t nPrime(uint64_t n) {
// вставьте код функции
uint64_t t_num = 0;
for (uint64_t i = 2; i < UINT64_MAX; i++) {
if (checkPrime(i)) {
t_num++;
}
if (n == t_num) {
return i;
}
}
}

uint64_t nextPrime(uint64_t value) {
// вставьте код функции
for (uint64_t i = value + 1; i < UINT64_MAX; i++) {
if (checkPrime(i)) {
return i;
}
}
}

uint64_t sumPrime(uint64_t hbound) {
// вставьте код функции
uint64_t summa = 0;
for (int i = 2; i < hbround; i++) {
if (checkPrime(i)) {
summa = summa + i;
}
}
return summa;
}
