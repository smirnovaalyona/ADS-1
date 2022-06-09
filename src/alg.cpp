// Copyright 2022 NNTU-CS
#include <cstdint>
#include <cmath>
#include "alg.h"


bool checkPrime(uint64_t value) {
// вставьте код функции
  if (value < 2) return false;
  if (value == 2) return true;
  for (uint64_t m = 2; m <= sqrt(value); m++) {
    if (!(value % m)) {
      return false;
    }
  }
  return true;
}

uint64_t nPrime(uint64_t n) {
// вставьте код функции
  uint64_t  t_numb = 0;
  for (uint64_t m = 2; m < UINT64_MAX; m++) {
    if (checkPrime(m)) {
      t_numb++;
    }
    if (n == t_numb) {
      return m;
    }
  }
  return 0;
}

uint64_t nextPrime(uint64_t value) {
// вставьте код функции
  for (uint64_t m = value+1; m < UINT64_MAX; m++) {
    if (checkPrime(m)) {
      return m;
    }
  }
  return 0;
}

uint64_t sumPrime(uint64_t hbound) {
// вставьте код функции
  uint64_t sum = 0;
  for (int m = 2; m < hbound; m++) {
    if (checkPrime(m)) {
      sum = sum + m;
    }
  }
  return sum;
}
