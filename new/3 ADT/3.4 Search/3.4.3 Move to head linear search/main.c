//
//  main.cpp
//  Move to head linear search
//
//  Created by Swilam on 1/11/2026.
//

#include <stdio.h>
#include <stdlib.h>

// The idea of move to head linear search is to search for an element in an
// array by checking each element one by one. if the element is found, it will
// be swapped with the first element

struct Arr {
  int A[7];   // the array
  int length; // the total item count in the array
  int size;   // the length
};

// function to display the array
void display(struct Arr arr) {
  for (int i = 0; i < arr.length; i++) {
    printf("%d\t", arr.A[i]);
  }
}

// function to swap two elements
void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

int linearSearch(struct Arr *arr, int target) {

  for (int i = 0; i < arr->length; i++) {
    if (target == arr->A[i]) {
      // if the element is found, it will be swapped with the first element
      // only if i is greater than 0
      if (i >= 1) {
        swap(&arr->A[i], &arr->A[0]);
      }
      return i;
    }
  }

  return -1;
}

int main(int argc, const char *argv[]) {

  struct Arr arr = {{2, 4, 6, 1}, 4, 7};

  printf("%d\n", linearSearch(&arr, 6));

  display(arr);

  return 0;
}
