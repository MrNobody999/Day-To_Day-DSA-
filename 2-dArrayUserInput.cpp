#include <iostream>
using namespace std;

void printArray(int crr[][3], int row, int col) {
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      cout << crr[i][j] << " ";
    }
    cout << endl;
  }
}

void printArrayColumnwise(int crr[][4], int row, int col) {
  for (int i = 0; i < col; i++) {
    for (int j = 0; j < row; j++) {
      cout << crr[j][i] << " ";
    }
    cout << endl;
  }
}

int main() {

  int arr[3][3];

  int row = 3;
  int col = 3;

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      cout<<"Enter the input for row index: "<<i <<" column index: "<<j << endl;
      cin >> arr[i][j];
    }
  }
  printArray(arr, row, col);

  return 0;
}
