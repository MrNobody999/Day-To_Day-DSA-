#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;

int main() {

  // Jagged Array:

  vector<vector<int>> brr;

  vector<int> vec1(10, 1);
  vector<int> vec2(5, 3);
  vector<int> vec3(11, 0);
  vector<int> vec4(9, 9);
  vector<int> vec5(3, 7);

  brr.push_back(vec1);
  brr.push_back(vec2);
  brr.push_back(vec3);
  brr.push_back(vec4);
  brr.push_back(vec5);

  cout << "Printing jagged array: " << endl;
  for (int i = 0; i < brr.size(); i++) {
    for (int j = 0; j < brr[i].size(); j++) {
      cout << brr[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
