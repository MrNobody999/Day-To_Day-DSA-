/* 
Question : Find pivot index in a sorted totated array
Example : arr = {12,14,16,2,4,6,8,10}
output: 2
*/

#include <bits/stdc++.h>
using namespace std;

int findPivotElement(vector<int>& nums){

    int n = nums.size();
    int s = 0;
    int e = n - 1;

    int mid = (s + (e-s)) / 2;

    while(s <= e){
        if(s == e){
            return s;
        }
        else if(nums[mid] > nums[mid + 1]){
            return mid;
        }
        else if(nums[mid] < nums[mid - 1]){
            return mid - 1;
        }
        else if(nums[s] > nums[mid]){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e-s) / 2;
    }
    return -1;        
}


int main() {

  vector<int> arr = {12,14,16,2,4,6,8,10};

  cout<<"Pivot index is: "<<findPivotElement(arr)<<endl;

  return 0;
}
