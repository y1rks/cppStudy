#include <iostream>
#include <list>

using namespace std;

int main() {
  list<int> ls;
  int input;

  while(true) {
    cout << "正の整数を入力: ";
    cin >> input;

    if (input == -1) {
      break;
    }

    ls.push_back(input);
  }

  ls.remove(2);

  list<int>::iterator itr;

  for (itr = ls.begin(); itr != ls.end(); itr++) {
    cout << *itr << " ";
  }

  cout << endl;

  return 0;
}
