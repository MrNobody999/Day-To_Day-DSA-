#include <iostream>
#include <limits.h>
using namespace std;

void diagonalSum(int arr[][3], int row, int col) {
  for (int i = 0; i < col; i++) {
    cout << arr[i][i] << " ";
  }
}

int main() {

  int arr[3][3] = {{10, 20, 30}, {40, 500, 60}, {70, 80, 9}};

  int row = 3;
  int col = 3;

  diagonalSum(arr, row, col);

  return 0;
}
