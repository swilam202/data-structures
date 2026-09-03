//
//  main.c
//  1_head_tail_recursion
//
//  Created by Swilam on 03/09/2026.
//

#include <stdio.h>
#include <stdlib.h>

//  the idea of recursion is a function that calls itself like loops
//  until it stops when it reaches the base case
//  the base case is the condition that stops the recursion
//  if we don't have a base case the recursion will continue until it crashes
//  eg stack overflow

//  the idea of this code is to print the numbers from 5 to 1
//  the base case is when n becomes 0
//  so it loops and creates a copy of itself until n becomes 0 (base case)

// the recursive function
void printNumber(int n) {

  if (n > 0) { // the base case which is when n is less than 0
    printf("%d ", n);
    printNumber(n - 1); // calling itself once again if the condition is true
  }
  // when the condition is false (n is 0), it will return to the previous call
  // and so on until it returns to the main function
}

int main(int argc, const char *argv[]) {
  int x = 5; 
  printNumber(x);
  printf("\n");

  return 0;
}
