#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
  string str;
  set<string> s;
  cout << "Input a word in English: ";
  cin >> str;

  for (int i = 0; i < str.length(); i++) {
    s.insert(str.substr(i, 1));
  }

  set<string>::iterator itr;
  for (itr = s.begin(); itr != s.end(); itr++) {
    cout << *itr << " ";
  }
  cout << endl;
  return 0;
}
