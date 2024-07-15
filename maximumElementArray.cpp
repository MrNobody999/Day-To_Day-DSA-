#include <iostream>
#include <limits.h>
using namespace std;

int extremePrintArray(int arr[], int size) {
  int maxi = INT_MIN;

  for (int i = 0; i < size; i++) {
    if (arr[i] > maxi) {
      maxi = arr[i];
    }
  }
  return maxi;
}

int main() {
  int arr[] = {45, 41, 7, 23, 84, 85, 63, 32, 12, 99};
  int size = 10;

  int ans = extremePrintArray(arr, size);
  cout << "Maximum element in array is : " << ans << endl;

  return 0;
}
