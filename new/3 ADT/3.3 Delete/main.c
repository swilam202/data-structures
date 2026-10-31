//
//  main.cpp
//  Delete
//
//  Created by Swilam on 31/10/2026.
//

#include <stdio.h>
#include <stdlib.h>

// The idea of delete is to remove an element from the array

struct Arr {
  int A[7];   // the array
  int length; // the total item count in the array
  int size;   // the length
};

// display the array
void display(struct Arr arr) {
  for (int i = 0; i < arr.size; i++) {
    printf("%d\t", arr.A[i]);
  }
}

void deleteItem(struct Arr *arr, int index) {
  // first we check if the index is valid
  if (index < 0) {
    return;
  }
  // check if the index is smaller than the length of the array length
  if (index >= arr->length) {
    return;
  }

  // we shift all the elements at the left of the index
  // one step backward
  // ex. A= [2,4,6,8], index = 1
  // after the loop the array will be [2,6,8,8]
  for (int i = index; i < arr->length; i++) {
    arr->A[i] = arr->A[i + 1];
  }
  // set the last element to 0
  arr->A[arr->length] = 0;
  // decrease the length of the array
  arr->length--;
}

int main(int argc, const char *argv[]) {

  struct Arr arr = {{2, 4, 6, 1}, 4, 7};

  deleteItem(&arr, 1);
  display(arr);

  return 0;
}
