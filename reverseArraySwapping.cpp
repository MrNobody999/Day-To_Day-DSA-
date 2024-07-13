#include <iostream>
#include <limits.h>
using namespace std;

void reverseArray(int arr[], int size) {
  int start = 0;
  int end = size - 1;

  for (int i = 0; i < size / 2; i++) {
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }

  for(int i=0; i<size; i++){
    cout<<arr[i]<<" ";
  }
}


int main() {
  int arr[] = {45, 41, 7, 23, 84, 85, 63, 32, 12, 99};
  int size = 10;

  reverseArray(arr, size);

  return 0;
}
