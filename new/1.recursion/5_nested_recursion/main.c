//
//  main.cpp
//  nested_recursion
//
//  Created by Swilam on 10/09/2026.
//

#include <stdio.h>
#include <stdlib.h>

// Nested recursion is when the function is called inside the recursive call
// for example fun(fun(n+11))

int fun(int n) {
  // base case
  if (n >= 100) {
    return n - 10;
  }

  // recursive call
  return fun(fun(n + 11));
}

int main(int argc, const char *argv[]) {
  int result = fun(95);
  printf("%d\n", result);

  return 0;
}
