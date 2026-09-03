//
//  main.cpp
//  static_vs_global_variables
//
//  Created by Swilam on 03/09/2026.
//

#include <stdio.h>
#include <stdlib.h>

// the idea of this code is to show that global variable and static variable are
// the same effect in this case i have 2 functions that multiply a number by
// itself and i use 2 ways the first one i made it use the global variable eg y
// and the second one i made it use the static variable eg z

// the global variable it can be accessed from anywhere in the code

// the static variable is a variable declared in the local scope
// and the value of the static variable is usable in each iteration in the
// recursion so all the method updates the same value in the memory not
// initializing a new variable each iteration

// this is the global variable
int y = 0;

// this is the method that updates the global variable
int multiplyWithGlobalVariable(int n) {
  if (n > 0) {
    y++; // each time we increment the variable
    return multiplyWithGlobalVariable(n - 1) + y;
  }
  return 0;
}

// this is the method that updates the static variable
int multiplyWithStaticVariable(int n) {
  static int z = 0; // init of the static variable
  if (n > 0) {
    z++;
    return multiplyWithStaticVariable(n - 1) + z;
  }
  return 0;
}

int main(int argc, const char *argv[]) {

  int x = 7;
  int result = multiplyWithStaticVariable(x);
  printf("%d\n", result);
}
