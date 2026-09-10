//
//  main.cpp
//  sum_natural_numbers
//
//  Created by Swilam on 10/09/2026.
//

#include <stdio.h>
#include <stdlib.h>

// there are 3 ways to calculate the sum of natural numbers

// first way: using recursion
int sum(int n) {
  if (n == 0) {
    return 0;
  }
  return sum(n - 1) + n;
}

// second way: using iteration
int iterationSum(int n) {
  int sum = 0;
  for (int i = n; i > 0; i--) {
    sum += i;
  }
  return sum;
}

// third way: using formula
int formulaSum(int n) { return (n * (n + 1)) / 2; }

// the third way is the best way because the time and space complexity is O(1)
// the second is is medium because the time complexity is O(n) and the space
// complexity is O(1) the first is the worst way because the time complexity is
// O(n) and the space complexity is O(n)

int main(int argc, const char *argv[]) {
  int result = formulaSum(5);
  printf("%d\n", result);

  return 0;
}
