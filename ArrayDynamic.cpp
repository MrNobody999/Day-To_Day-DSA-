#include <iostream>
#include <vector>
using namespace std;

void fun(int a[], int n) {
  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
}

int main() {
  // Static memory allocation of array
  // int arr[5] = {1,2,3,4,5};

  // Dynamic memory allocation
  int n;
  cin >> n;
  int *arr = new int[n]; // Each element would be 0 or garbage value

  for(int i=0; i<n; i++){
    int data;
    cin>>data;
    arr[i]=data;
  }

  fun(arr, n);

  return 0;
}
