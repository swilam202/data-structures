//
//  main.cpp
//  power
//
//  Created by Swilam on 10/09/2026.
//

#include <stdio.h>
#include <stdlib.h>

// we can calculate the power in 2 ways

// first way using recursion
int power(int m, int n) {
  if (n == 0) {
    return 1;
  }
  return power(m, n - 1) * m;
}

// second way using recursion but faster
// the idea is to reduce the number of recursive calls
int fasterPower(int m, int n) {
  if (n == 0) {
    return 1;
  }
  // if n is even
  //  we will square the base eg. m*m and half the exponent
  //  eg. 2^4 = (2*2)^(4/2) = 4^2
  if (n % 2 == 0) {
    return fasterPower(m * m, n / 2);
  }
  // if n is odd
  //  the same idea of the even but we reduce one m from the formula
  //  and we make it as even and don't forget to reduce the exponent by 1
  // eg. 2^5 = 2 * 2^4 = 2 * (2*2)^(4/2) = 2 * 4^2
  else
    return m * power(m * m, (n - 1) / 2);
}

// the first way the time complexity is O(n) and the space complexity is O(n)
// the second way the time complexity is O(log n) and the space complexity is
// O(log n)

// the second way is better because the time complexity is O(log n) and the
// space complexity is O(log n)

int main(int argc, const char *argv[]) {
  int result = fasterPower(5, 2);
  printf("%d\n", result);

  return 0;
}
