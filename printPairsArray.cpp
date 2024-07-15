#include <iostream>
#include <limits.h>
using namespace std;

void printPairsArray(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      cout << "(" << arr[i] << "," << arr[j] << ")";
      cout << " ";
    }
    cout << endl;
  }
}

int main() {
  int arr[] = {2, 10, 11};
  int size = 3;

  printPairsArray(arr, size);
  return 0;
}
