//
//  main.cpp
//  Reverse Array
//
//  Created by Swilam on 17/11/2026.
//

#include <stdio.h>
#include <stdlib.h>

// The idea of reverse it means the first element will be the last and the last
// will be the first And so on

struct Arr {
  int A[10];  // the array to be reversed
  int length; // the length of the array
};

// the display method
void display(struct Arr arr) {
  for (int i = 0; i < arr.length; i++) {
    printf("%d\t", arr.A[i]);
  }
}

// this is the first way
// its a brute force way
// we copy the elements reversed in a temp array
// and then we copy the value of the temp array to the original array
void reverse(struct Arr *arr) {
  int *tempArr;            // the temp array
  int j = arr->length - 1; // the index of the last element
  for (int i = 0; i < arr->length; i++, j--) {
    tempArr[i] = arr->A[j]; // the value of the last element will be copied to
                            // the first element and so on
  }
  for (int i = 0; i < arr->length; i++) {
    arr->A[i] = tempArr[i]; // copying the value of the temp reversed array to
                            // the original array
  }
}

// swap 2 values in array
void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

// this is the best way
// because it loops on half of the array only
// and doesn't need any temp array
// it swaps the first and the last at each step

void enhancedReverse(struct Arr *arr) {
  for (int i = 0, j = arr->length - 1; i < arr->length / 2; i++, j--) {

    swap(&arr->A[i], &arr->A[j]);
  }
}

int main(int argc, const char *argv[]) {

  struct Arr arr = {{2, 5, 7, 9, 12, 15, 19, 21, 30, 34}, 10};

  display(arr);
  printf("\n");

  enhancedReverse(&arr);

  display(arr);

  return 0;
}
