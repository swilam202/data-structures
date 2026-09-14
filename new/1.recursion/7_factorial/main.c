//
//  main.cpp
//  factorial
//
//  Created by Swilam on 10/09/2026.
//

#include <stdio.h>
#include <stdlib.h>

// we can calculate the factorial in 2 ways

// first way using recursion
int factorial(int n) {
  if (n == 0) {
    return 1;
  }
  return factorial(n - 1) * n;
}

// second way using iteration
int iterationFactorial(int n) {
  int fact = 1;
  for (int i = n; i > 0; i--) {
    fact *= i;
  }
  return fact;
}

// the iterative way is better because the time complexity is O(n) and the space
// complexity is O(1) the
// the recursive way is worse because the time complexity is O(n) and the space
// complexity is O(n)

int main(int argc, const char *argv[]) {
  int result = iterationFactorial(5);
  printf("%d\n", result);

  return 0;
}
