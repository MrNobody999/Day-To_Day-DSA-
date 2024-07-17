#include <iostream>
using namespace std;

void printArray(int crr[][4], int row, int col) {
  for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
      cout<<crr[i][j]<<" ";
    }
    cout<<endl;
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
  
int crr[][4] = {
      {10, 20, 30, 40},
      {50, 60, 70, 80},
      {90, 100, 110, 120},
  };

  int row = 3;
  int col = 4;

  printArray(crr, row, col);

  printArrayColumnwise(crr, row, col);

  return 0;
}
