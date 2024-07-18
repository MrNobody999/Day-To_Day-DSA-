#include <iostream>
#include <limits.h>
using namespace std;

void rowwiseSum(int arr[][3], int row, int col) {
  for (int i = 0; i < row; i++) {
    int sum = 0;
    for (int j = 0; j < col; j++) {
      sum = sum + arr[i][j];
    }
    cout << sum << endl;
  }
}

int main() {

  int arr[3][3] = {{10, 20, 30}, {40, 500, 60}, {70, 80, 9}};

  int row = 3;
  int col = 3;

  rowwiseSum(arr, row, col);

  return 0;
}
