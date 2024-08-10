// Question : Find first occurance of element in array

#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> arr, int n, int target) {
  int start = 0;
  int end = n - 1;
  int mid = (start + end) / 2;
  int ans = -1;

  while (start <= end) {
    if (arr[mid] == target) {
      ans = mid;
      end = mid - 1;
    } else if (target > arr[mid]) {
      start = mid + 1;
    } else if (target < arr[mid]) {
      end = mid - 1;
    }
    mid = (start + end) / 2; // Bhul jate hai hum ye
  }

  return ans;
}

int main() {

  vector<int> arr = {10, 20, 30, 30, 30, 30, 40, 50};
  int target = 30;
  int n = arr.size();

  int ans = binarySearch(arr, n, target);

  if (ans == -1) {
    cout << "Element not found";
  } else {
    cout << "Element found at index : " << ans << endl;
  }

  return 0;
}
