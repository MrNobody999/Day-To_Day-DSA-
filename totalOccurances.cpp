// Question : Total occurances of element in array

#include <bits/stdc++.h>
using namespace std;

int firstOccurance(vector<int> arr, int n, int target) {
  int start = 0;
  int end = n -1;
  int ans = -1;
  int mid = ((start + end)/2);

  while(start <= end){
    if(arr[mid] == target){
      ans = mid;
      end = mid - 1;
    }
    else if(target > arr[mid]){
      start = mid + 1;
    }
    else if(target < arr[mid]){
      end = mid - 1;
    }
    mid = (start+end)/2;
  }
  return ans;
}


int lastOccurance(vector<int> arr, int n, int target) {
  int start = 0;
  int end = n -1;
  int ans = -1;
  int mid = ((start + end)/2);

  while(start <= end){
    if(arr[mid] == target){
      ans = mid;
      start = mid + 1;
    }
    else if(target > arr[mid]){
      start = mid + 1;
    }
    else if(target < arr[mid]){
      end = mid - 1;
    }
    mid = (start+end)/2;
  }
  return ans;
}

int totalOccurances(vector<int> arr, int n, int target){
  int first = firstOccurance(arr, n, target);
  int last = lastOccurance(arr, n, target);
  int total = last - first + 1;
  return total;
}

int main() {

  vector<int> arr = {10, 20, 30, 30, 30, 30, 30, 50};
  int target = 30;
  int n = arr.size();

  int ans = totalOccurances(arr, n, target);

  if (ans == -1) {
    cout << "Element not found";
  } else {
    cout << "Total occurances of " << target << " is/are : " << ans<< endl;
  }

  return 0;
}
