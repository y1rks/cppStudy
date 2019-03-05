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

    bool frag = false;

    if (ls.size() <= 0) {
      ls.push_back(input);
      frag = true;
    }

    list<int>::iterator itr;

    for(itr = ls.begin(); itr != ls.end(); itr++) {
      if (*itr > input) {
        ls.insert(itr, input);
        frag = true;
        break;
      }
    }

    if (!frag) {
      ls.push_back(input);
    }

    for (itr = ls.begin(); itr != ls.end(); itr++) {
      cout << *itr << " ";
    }
    cout << endl;
  }

  return 0;
}
