#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> arr, int n, int target) {
  int start = 0;
  int end = n - 1;

  int mid = (start + end) / 2;

  while (start <= end) {
    // Rule 1 : Target Found
    if (arr[mid] == target) {
      return mid;
    }
    // Rule 2 : target > arr[mid]
    else if (target > arr[mid]) {
      start = mid + 1;
    }
    // Rule 3 : target < arr[mid]
    else if (target < arr[mid]) {
      end = mid - 1;
    }
    mid = (start + end) / 2;
  }

  // If you reach this point then no target element found
  return -1;
}

int main() {

  vector<int> arr = {10, 20, 30, 40, 50, 60, 70, 80, 90};
  int target = 90;
  int n = arr.size();

  int ans = binarySearch(arr, n, target);

  if(ans == -1){
    cout<<"Element not found";
  } 
  else{
    cout<<"Element found at index : "<<ans<<endl;
  }

  return 0;
}
