//
//  main.cpp
//  Merge Array
//
//  Created by Swilam on 21/11/2026.
//

#include <stdio.h>
#include <stdlib.h>

// The idea of merge is to take two sorted arrays and merge them into a single
// sorted array but the 2 arrays must be sorted we iterate over the 2 arrays at
// the same time if the element in arr1 is smaller than the element in arr2, we
// add it to arr3 and increment i else we add the element in arr2 to arr3 and
// increment j we continue this until we reach the end of one of the arrays then
// we add the remaining elements of the other array to arr3 because they are
// already sorted

struct Arr {
  int A[10];
  int length;
};

// the display method
void display(int *arr, int length) {
  for (int i = 0; i < length; i++) {
    printf("%d\t", arr[i]);
  }
}

// the merge function
int *merge(struct Arr arr1, struct Arr arr2) {
  // calculate the new length of the new array
  int length = arr1.length + arr2.length;

  // create new array
  int *arr3 = (int *)malloc(length * sizeof(int));

  // init positions
  int i = 0, j = 0, k = 0;

  // while the 2 arrays have elements
  // compare

  while (i < arr1.length && j < arr2.length) {
    // if the element at i in arr1 is less than the element at j in arr2
    // add the element at i in arr1 to arr3 and increment i and k
    if (arr1.A[i] < arr2.A[j]) {
      arr3[k++] = arr1.A[i++];
    }
    // else add the element at j in arr2 to arr3 and increment j and k
    else {
      arr3[k++] = arr2.A[j++];
    }
  }

  // add remaining elements of arr1 if any
  for (; i < arr1.length; i++) {
    arr3[k++] = arr1.A[i];
  }

  // add remaining elements of arr2 if any
  for (; j < arr2.length; j++) {
    arr3[k++] = arr2.A[j];
  }

  return arr3;
}

int main(int argc, const char *argv[]) {

  printf("\n");

  struct Arr arr1 = {{2, 5, 7, 9, 12, 15, 19, 21, 30, 34}, 10};
  struct Arr arr2 = {{3, 6, 12, 16, 22, 25, 27, 29, 35}, 9};

  int *arr3 = merge(arr1, arr2);
  int length = arr1.length + arr2.length;

  display(arr3, length);

  return 0;
}
