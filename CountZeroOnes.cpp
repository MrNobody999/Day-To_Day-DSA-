#include <iostream>
using namespace std;

void countZeroOnes(int arr[], int size) {
  int zeroCount = 0, oneCount = 0;
  for (int i = 0; i < size; i++) {
    if (arr[i] == 0) {
      zeroCount++;
    } else if (arr[i] == 1) {
      oneCount++;
    }
  }

  cout << "Count of zeros: " << zeroCount << endl;
  cout << "Count of ones: " << oneCount << endl;
}

int main() {
  int arr[] = {1, 0, 1, 0, 1, 0, 1, 0, 1, 1};
  int size = 10;

  countZeroOnes(arr, size);

  return 0;
}
