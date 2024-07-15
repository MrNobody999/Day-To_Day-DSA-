#include <iostream>
#include <limits.h>
using namespace std;

void extremePrintArray(int arr[], int size) {
  int left = 0;
  int right = size - 1;

  cout << "Printing extreme elements in an array: ";
  while (left <= right) {
    cout << arr[left] << " ";
    cout << arr[right] << " ";
    left++;
    right--;
  }
}

int main() {
  int arr[] = {45, 41, 7, 23, 84, 85, 63, 32, 12, 99};
  int size = 10;

  extremePrintArray(arr, size);

  return 0;
}
