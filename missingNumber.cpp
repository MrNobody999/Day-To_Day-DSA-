/* 
Question : Find missing number in a sorted array using Binary search
Example : arr = {1,2,3,4,6,7,8,9}
output: 5
*/

#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int> &arr, int n){
  int start = 0;
  int end = n -1;
  int mid = start + (end-start)/2;
  int ans = -1;

  while(start <= end){
    int diff = arr[mid] - mid;

    if(diff == 1){
      start = mid + 1;
    }
    else{
      ans = mid;

      end = mid -1;
    }
    mid = start + (end-start)/2;
  }
  if(ans + 1 == 0){
    return n+1;
  }
  return ans + 1;
}

int main() {

  vector<int> arr = {1,2,3,4,5,6,7,8};
  int n = 8;

  int ans = missingNumber(arr, n);

  cout<<"Missing element is: "<<ans<<endl;

  return 0;
}
