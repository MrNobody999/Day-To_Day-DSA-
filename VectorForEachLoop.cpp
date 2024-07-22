#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> v) {
  cout << "Printing vector second method:" << endl;
  for (auto it : v) {
    cout << it << " ";
  }
  cout << endl;
}

int main() {

  vector<int> v;

  v.push_back(10);
  v.push_back(20);
  v.push_back(30);
  v.push_back(40);

  // First Element
  cout << v[0] << endl;
  cout << v.front() << endl;

  // Last Element
  cout << v[v.size() - 1] << endl;
  cout << v.back() << endl;

  printVector(v);
}
