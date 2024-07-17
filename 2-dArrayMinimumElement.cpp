#include <iostream>
#include <limits.h>
using namespace std;

int minimumElement(int arr[][3], int row, int col) {
  int mini = INT_MAX;
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      if (arr[i][j] <= mini) {
        mini = arr[i][j];
      }
    }
  }
  return mini;
}

int main() {

  int arr[3][3] = {{10, 20, 30}, {40, 500, 60}, {70, 80, 9}};

  int row = 3;
  int col = 3;

  int answer = minimumElement(arr, row, col);

  cout << "Minimum element in array is: " << answer << endl;

  return 0;
}
