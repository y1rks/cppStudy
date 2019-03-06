#include <iostream>
#include <set>

using namespace std;

int main() {
  set<int> s;

  for (int i = 0; i < 10; i++) {
    int r = rand() % 11;
    cout << r << " ";
    s.insert(r);
  }
  cout << endl;

  set<int>::iterator it;
  for (it = s.begin(); it != s.end(); it++) {
    cout << *it << " ";
  }
  cout << endl;

  return 0;
}
