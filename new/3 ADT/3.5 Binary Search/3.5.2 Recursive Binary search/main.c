//
//  main.cpp
//  Recursive Binary search
//
//  Created by Swilam on 11/11/2026.
//

#include <stdio.h>
#include <stdlib.h>

// The idea of binary search is to check the middle element
// if the middle element is the key, then return the index
// if the key is greater than the middle element, then search in the right half
// if the key is less than the middle element, then search in the left half
// repeat the process until the key is found or return -1 in case of the key is
// not found

//! pitfall: the array must be sorted

struct Arr {
  int A[10];  // the array to be searched
  int length; // the number of elements in the array
};

// make the function accept the low and high parameters
// not calculating it by itself because it's recursive

int recursiveinarySearch(struct Arr arr, int key, int low, int high) {

  // a condition to stop the search in case of the item is not found
  // and you know it's not found when low > high
  if (low <= high) {

    // calculate the mid
    int mid = (low + high) / 2;

    // check if the mid is the item we are searching for
    if (key == arr.A[mid]) {
      return mid;
    }

    // elif the key is bigger than the mid make the low which is the start of
    // the array to start from the next item after mid
    // and call the function again on the new data
    else if (key > arr.A[mid]) {
      return recursiveinarySearch(arr, key, mid + 1, high);
    }
    // else meaning that the item is smaller than the mid make the high which is
    // the end of the array to end at the previous item before mid
    // and call the function again on the new data
    else {
      return recursiveinarySearch(arr, key, low, mid - 1);
    }
  }

  //! returning -1 means not found
  return -1;
}

int main(int argc, const char *argv[]) {

  struct Arr arr = {{2, 5, 7, 9, 12, 15, 19, 21, 30, 34}, 10};

  printf("%d\n", recursiveinarySearch(arr, 21, 0, 9));

  return 0;
}
