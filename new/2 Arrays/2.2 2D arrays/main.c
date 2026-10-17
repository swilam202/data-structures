//
//  main.cpp
//  2D arrays
//
//  Created by Swilam on 17/10/2026.
//

#include <stdio.h>
#include <stdlib.h>

// 2D arrays
// 2D arrays are arrays that contain arrays in each cell
// in this code this is 3 different ways to implement 2D arrays

int main(int argc, const char *argv[]) {

  // first way to implement 2D arrays
  // you define the size of the outer array which is 3
  // and the size of the inner arrays which is 4
  // and all the inner arrays must have the same size
  int A[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

  // second way to implement 2D arrays
  // you define an array of pointers
  // each pointer points to an array
  // and all the inner arrays must have the same size
  int *B[3];

  // allocate memory for each inner array
  B[0] = (int *)malloc(4 * sizeof(int));
  B[1] = (int *)malloc(4 * sizeof(int));
  B[2] = (int *)malloc(4 * sizeof(int));

  // third way to implement 2D arrays
  // you define a pointer to a pointer
  // which points to an array of pointers
  int **C;
  C = (int **)malloc(3 * sizeof(int));

  C[0] = (int *)malloc(4 * sizeof(int));
  C[1] = (int *)malloc(4 * sizeof(int));
  C[2] = (int *)malloc(4 * sizeof(int));

  return 0;
}
