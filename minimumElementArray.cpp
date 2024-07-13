#include <iostream>
#include <limits.h>
using namespace std;

int minimumElement(int arr[], int size) {
  int mini = INT_MAX;

  for (int i = 0; i < size; i++) {
    if (arr[i] < mini) {
      mini = arr[i];
    }
  }
  return mini;
}

int main() {
  int arr[] = {45, 41, 7, 23, 84, 85, 63, 32, 12, 99};
  int size = 10;

  int ans = minimumElement(arr, size);
  cout << "Minimum element in array is : " << ans << endl;

  return 0;
}
