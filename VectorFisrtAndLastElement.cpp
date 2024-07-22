#include <iostream>
#include <vector>
using namespace std;

int main() {

  vector<char> v;

  v.push_back('a');
  v.push_back('b');
  v.push_back('c');
  v.push_back('d');

  // First Element
  cout << v[0] << endl;
  cout << v.front() << endl;

  // Last Element
  cout << v[v.size() - 1] << endl;
  cout << v.back() << endl;
}
