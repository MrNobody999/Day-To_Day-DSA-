#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> v) {
  int size = v.size();
  for (int i = 0; i < size; i++) {
    cout << v[i] << " ";
  }
}

int main() {

  vector<int> v;

  while (1) {
    int d;
    cin >> d;
    v.push_back(d);
    cout << "Capacity: "<< " " << v.capacity() << "  Size: " << v.size() << endl;
  }

  printVector(v);
}
