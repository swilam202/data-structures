//
//  main.cpp
//  Linear search
//
//  Created by Swilam on 1/11/2026.
//

#include <stdio.h>
#include <stdlib.h>

// The idea of linear search is to search for an element in an array by checking
// each element one by one. it's good for unsorted array. the time complexity of
// linear search is O(n). the space complexity of linear search is O(1).

// structure to represent an array
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

int linearSearch(struct Arr arr, int target) {

  // checking each element one by one
  for (int i = 0; i < arr.length; i++) {
    if (target == arr.A[i]) {
      return i;
    }
  }
  // if the element is not found
  return -1;
}

int main(int argc, const char *argv[]) {

  struct Arr arr = {{2, 4, 6, 1}, 4, 7};

  printf("%d\n", linearSearch(arr, 6));

  display(arr);

  return 0;
}
