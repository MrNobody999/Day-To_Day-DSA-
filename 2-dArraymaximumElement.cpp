
#include <iostream>
#include <limits.h>
using namespace std;

int maximumElement(int arr[][3], int row, int col) {
  int maxi= INT_MIN;
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      if (arr[i][j] >= maxi) {
        maxi = arr[i][j];
      }
    }
  }
  return maxi;
}

int main() {

  int arr[3][3] = {{10, 20, 30}, {40, 500, 60}, {70, 80, 90}};

  int row = 3;
  int col = 3;

  int result = maximumElement(arr, row, col);

  cout << "Maximum element in 2-d array is: "<< result << endl;
  
  return 0;
}
