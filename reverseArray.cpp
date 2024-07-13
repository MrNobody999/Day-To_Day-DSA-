#include <iostream>
#include <limits.h>
using namespace std;

void reverseArray(int arr[], int size) {
  int left = 0;
  int right = size - 1;
  while (left <= right) {
    swap(arr[left], arr[right]);
    left++;
    right--;
  }

  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
}

int main() {
  int arr[] = {45, 41, 7, 23, 84, 85, 63, 32, 12, 99};
  int size = 10;

  reverseArray(arr, size);

  return 0;
}
