#include <algorithm>
#include <iostream>
using namespace std;

bool areAnagram(string str1, string str2) {
  int str1_size = str1.length();
  int str2_size = str2.length();

  if (str1_size != str2_size) {
    return false;
  }

  // sort both strings so we can check easily
  sort(str1.begin(), str1.end());
  sort(str2.begin(), str2.end());

  for (int i = 0; i < str1_size; i++) {
    if (str1[i] != str2[i]) {
      return false;
    }
  }
  return true;
}

int main() {

  cout << "Ganpati Bappa Morya.\n";

  string str1 = "gram";
  string str2 = "arm";

  if (areAnagram(str1, str2) == true) {
    cout << "Strings are anagram";
  } else {
    cout << "Strings are not anagram";
  }

  return 0;
}
