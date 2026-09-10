//
//  main.cpp
//  tree_recursion
//
//  Created by Swilam on 10/09/2026.
//

#include <stdio.h>
#include <stdlib.h>

// A tree-recursive function is a function that makes more than one recursive
// call.

void printNumber(int n) {
  // base case
  if (n == 0) {
    return;
  }

  printf("%d\n", n);

  // recursive calls (more than 1)
  printNumber(n - 1);
  printNumber(n - 1);
}

int main(int argc, const char *argv[]) {

  printNumber(3);

  return 0;
}
