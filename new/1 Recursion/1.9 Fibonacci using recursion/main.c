//
//  main.cpp
//  Fibonacci
//
//  Created by Swilam on 15/09/2026.
//

#include <stdio.h>
#include <stdlib.h>

int fib(int n) {
  if (n <= 1)
    return n;

  return fib(n - 2) + fib(n - 1);
}

void resetArray(int *arr, int l) {
  for (int i = 0; i < l; i++) {
    arr[i] = -1;
  }
}

int mFib(int n, int *m) {

  if (n <= 1) {
    if (m[n] == -1)
      m[n] = n;
    return m[n];
  } else {

    if (m[n - 2] == -1)
      m[n - 2] = mFib(n - 2, m);
    if (m[n - 1] == -1)
      m[n - 1] = mFib(n - 1, m);

    return m[n - 2] + m[n - 1];
  }
}

int main(int argc, const char *argv[]) {
  int n = 6;
  int m[n + 1];
  resetArray(m, n);

  int r = mFib(n, m);

  printf("%d\n", r);

  return 0;
}
