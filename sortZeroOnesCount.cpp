#include <iostream>
#include <limits.h>
using namespace std;

void sortZeroOnes(int arr[], int size) {
  int countZero = 0;
  int countOne = 0;

  for (int i = 0; i < size; i++) {
    if (arr[i] == 0) {
      countZero++;
    }
    if (arr[i] == 1) {
      countOne++;
    }
  }

  int i;
  for (i = 0; i < countZero; i++) {
    arr[i] = 0;
  }
  for (int j = i; j < size; j++) {
    arr[j] = 1;
  }
}

int main() {
  int arr[] = {0, 1, 1, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 1};
  int size = 15; // 1-6  0-9

  sortZeroOnes(arr, size);

  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }

  return 0;
}
