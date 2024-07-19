#include <iostream>
#include <limits.h>
using namespace std;

void transposeMatrix(int arr[][4], int row, int col) {
  for (int i = 0; i < row; i++) {
    for (int j = i; j < col; j++) {
      if (i == j) {
        continue;
      } else {
        swap(arr[i][j], arr[j][i]);
      }
    }
  }
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}

int main() {

  int arr[4][4] = {
      {3, 4, 7, 8}, {11, 5, 17, 22}, {2, 12, 23, 9}, {10, 16, 21, 6}};

  int row = 4;
  int col = 4;

  transposeMatrix(arr, row, col);

  return 0;
}
