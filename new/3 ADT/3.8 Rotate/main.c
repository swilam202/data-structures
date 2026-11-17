//
//  main.cpp
//  Rotate Array
//
//  Created by Swilam on 17/11/2026.
//

#include <stdio.h>
#include <stdlib.h>

// The idea of rotate is the same as shift but with a small difference
// instead of deleting the last element (in the case of left shift) and adding 0
// to the end we will add the last element to the start of the array

struct Arr {
  int A[10];  // the array to be rotated
  int length; // the length of the array
};

// the display method
void display(struct Arr arr) {
  for (int i = 0; i < arr.length; i++) {
    printf("%d\t", arr.A[i]);
  }
}

void leftRotate(struct Arr *arr) {
  // we store the value of the first element
  // to be added to th end of an array instead of 0 in shift
  int temp = arr->A[0];
  for (int i = 0; i < arr->length; i++) {
    // we move the next element to the current index
    // (move everything to the left)
    arr->A[i] = arr->A[i + 1];
  }
  // we add the stored value to the end of the array
  arr->A[arr->length - 1] = temp;
}

void rightRotate(struct Arr *arr) {
  // we store the value of the last element
  // to be added to the start of an array instead of 0 in shift
  int temp = arr->A[arr->length - 1];
  for (int i = arr->length - 1; i >= 0; i--) {
    // we move the previous element to the current index
    // (move everything to the right)
    arr->A[i] = arr->A[i - 1];
  }
  // we add the stored value to the start of the array
  arr->A[0] = temp;
}

int main(int argc, const char *argv[]) {

  struct Arr arr = {{2, 5, 7, 9, 12, 15, 19, 21, 30, 34}, 10};

  display(arr);
  printf("\n");

  rightRotate(&arr);

  display(arr);

  return 0;
}
