#include <iostream>
#include <vector>
using namespace std;

void arrayArrange(int arr[], int size) {
  int left = 0;
  int right = size - 1;

  while (left <= right) {

    if (arr[left] < 0) {
      left++;
    } else if (arr[left] > arr[right]) {
      swap(arr[left], arr[right]);
      left++;
      right--;
    } else if (arr[left] < arr[right] && arr[left] > 0) {
      right--;
    } else if (arr[left] == 0) {
      left++;
    }
  }

  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
}

int main() {

  int arr[] = {12, 23, -7, -10, -11, 40, 60};
  int size = 7;

  arrayArrange(arr, size);

  return 0;
}
