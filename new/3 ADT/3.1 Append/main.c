//
//  main.cpp
//  Append
//
//  Created by Swilam on 31/10/2026.
//

#include <stdio.h>
#include <stdlib.h>

// the idea of append
// is to add an element to the end of the array

// we first create a struct
struct Arr {
  int A[10];  // the array
  int length; // the total item count in the array
  int size;   // the length
};

// method for display the items
void display(struct Arr arr) {
  for (int i = 0; i < arr.length; i++) {
    printf("%d\t", arr.A[i]);
  }
}

// the append method that takes the struct and the value that we want to append
void append(struct Arr *arr, int value) {

  // first we check if the array is full
  if (arr->length >= arr->size) {
    return;
  }
  // else we add the value to the end of the array
  arr->A[arr->length] = value;
  // and we increment the length
  arr->length++;
}

int main(int argc, const char *argv[]) {

  struct Arr arr = {{2, 4, 6, 1}, 4, 10};

  append(&arr, 5);
  display(arr);

  return 0;
}
