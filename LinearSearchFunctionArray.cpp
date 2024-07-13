#include <iostream>
using namespace std;

// present ->true;
// absent ->false;

bool linearSearch(int arr[], int size, int target) {
  for (int i = 0; i < size; i++) {
    if (arr[i] == target) {
      return true;
    }
  }
  return false;
}

int main() {
  int arr[] = {12, 45, 7, 8, 99, 11, 46, 79, 87, 23};
  int size = 10;
  int target = 11;

  // printArray(arr, size);
  bool ans = linearSearch(arr, size, target);
  if (ans == 1) {
    cout << "Target found" << endl;
  } else {
    cout << "Target not found" << endl;
  }

  return 0;
}
