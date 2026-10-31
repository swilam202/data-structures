//
//  main.cpp
//  Insert
//
//  Created by Swilam on 31/10/2026.
//

#include <stdio.h>
#include <stdlib.h>

// The idea of insert
// is to insert an element at a specific index in the array

struct Arr {
  int A[7];   // the array
  int length; // the total item count in the array
  int size;   // the length
};

// the display method
void display(struct Arr arr) {
  for (int i = 0; i < arr.length; i++) {
    printf("%d\t", arr.A[i]);
  }
}

void insert(struct Arr *arr, int value, int index) {
  // first we check if the index is valid
  if (index < 0) {
    return;
  }
  // then we check if the index is is not more than the array size
  if (index >= arr->size) {
    return;
  }

  // then we check if the index is is not more than the array length
  if (index > arr->length) {
    return;
  }

  // we shift all the elements at the right of the index
  // one step forward
  // ex. A= [2,4,6,8], index = 1
  // after the loop the array will be [2,4,4,6,8]

  for (int i = arr->length; i > index; i--) {
    arr->A[i] = arr->A[i - 1];
  }
  // then we insert the value at the index
  // ex. A= [2,4,4,6,8]
  // we insert 10 at index 1
  // the array will be [2,10,4,6,8]
  arr->A[index] = value;
  // we increment the length
  arr->length++;
}

int main(int argc, const char *argv[]) {

  struct Arr arr = {{2, 4, 6, 1}, 4, 7};

  insert(&arr, 8, 1);
  display(arr);

  return 0;
}
