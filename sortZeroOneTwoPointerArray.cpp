#include <iostream>
#include <limits.h>
using namespace std;

void sortZeroOnes(int arr[], int size) {
  int left=0;
  int right = size - 1;

  while(left <= right){
    if(arr[left] == 0 && arr[right] == 1){
      left++;
      right--;
    }
    else if(arr[left] == 1 && arr[right] == 1){
      right--;
    }
    else if(arr[left] == 0 && arr[right] == 0){
        left++;
    }
    else if(arr[left] == 1 && arr[right] == 0){
      swap(arr[left], arr[right]);
      left++;
      right--;
    }
  }

  for(int i=0; i<size; i++){
    cout<<arr[i]<<" ";
  }
}

int main() {
  int arr[] = {0, 1, 1, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 1};
  int size = 15; // 1-6  0-9

  sortZeroOnes(arr, size);
  return 0;
}
