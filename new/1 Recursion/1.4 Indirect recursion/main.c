//
//  main.cpp
//  indirect_recursion
//
//  Created by Swilam on 10/09/2026.
//

#include <stdio.h>
#include <stdlib.h>

// Indirect recursion is when a function calls another function
// and the other function calls the first also

// declaring of funB is necessary because it is called before it's implemented
void funB(int n);

void funA(int n) {
  if (n == 0) {
    return;
  }

  printf("%d ", n);
  // call the other function
  funB(n - 1);
}
void funB(int n) {
  if (n == 0) {
    return;
  }
  printf("%d ", n);
  // call the first function
  funA(n / 2);
}

int main(int argc, const char *argv[]) {
  funA(20);

  return 0;
}
