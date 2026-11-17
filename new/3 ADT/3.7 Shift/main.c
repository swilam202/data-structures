
//
//  main.cpp
//  Shift Array
//
//  Created by Swilam on 17/11/2026.
//

#include <stdio.h>
#include <stdlib.h>

// shift it means it shifts the elements of the array by one position to the
// left or right and to add 0 in the empty position in the case of left shift:
// the last element will be deleted and 0 will be added to the end in the case
// of right shift: the first element will be deleted and 0 will be added to the
// start

struct Arr {
  int A[10];  // the array to be shifted
  int length; // the length of the array
};

// the display method
void display(struct Arr arr) {
  for (int i = 0; i < arr.length; i++) {
    printf("%d\t", arr.A[i]);
  }
}

// this the left shift
// it shifts the elements of the array by one position to the left
// and to add 0 in the last position
void leftShift(struct Arr *arr) {
  for (int i = 0; i < arr->length; i++) {
    arr->A[i] = arr->A[i + 1];
  }
  // add 0 to the end of the array
  arr->A[arr->length - 1] = 0;
}

// this the right shift
// it shifts the elements of the array by one position to the right
// and to add 0 in the last position
void rightShift(struct Arr *arr) {
  for (int i = arr->length - 1; i >= 0; i--) {
    arr->A[i] = arr->A[i - 1];
  }
  // add 0 to the start of the array
  arr->A[0] = 0;
}

int main(int argc, const char *argv[]) {

  struct Arr arr = {{2, 5, 7, 9, 12, 15, 19, 21, 30, 34}, 10};

  display(arr);
  printf("\n");

  rightShift(&arr);

  display(arr);

  return 0;
}
