//
//  main.cpp
//  dynamic arrays
//
//  Created by Swilam on 17/10/2026.
//

#include <stdio.h>
#include <stdlib.h>

// Dynamic array
// how to increase the size of an array
// first you can't increase the size of an array
// you must create a new array with the desired size and copy the elements from
// the old array to the new array then delete the old one to prevent memory
// leaks

int main(int argc, const char *argv[]) {

  //  create an array with 5 elements
  int *p = (int *)malloc(5 * sizeof(int));

  // insert 5 elements in the array
  p[0] = 1;
  p[1] = 4;
  p[2] = 6;
  p[3] = 3;
  p[4] = 2;

  // create a new array with 10 elements
  // it must be a heap array not stack array

  int *q = (int *)malloc(10 * sizeof(int));

  // copy the elements from the old array to the new array
  for (int i = 0; i < 5; i++)
    q[i] = p[i];

  // free the old array values
  free(p);

  // make the old pointer points to the new array
  // so the old pointer points to the new array
  // without the need of the new pointer (q)
  p = q;

  // useless now
  q = NULL;

  // print the new array
  for (int i = 0; i < 10; i++) {
    printf("%d, ", p[i]);
  }

  return 0;
}
