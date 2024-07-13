#include <iostream>
using namespace std;

int main() {
  int arr[] = {12,45,7,8,99};
  int target = 7;
  int n = 5;
  bool flag = 0;

  for(int i = 0; i<n; i++){
    if(arr[i] == target){
      // found
      flag = 1;
      break;
    }
  }

  if(flag == 1){
    cout<<"Target found"<<endl;
  }
  else{
    cout<<"target not found"<<endl;
  }

  return 0;
}
