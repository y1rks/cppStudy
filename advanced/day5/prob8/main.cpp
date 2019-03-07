#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
  string str;
  cout << "input an word in English: ";
  cin >> str;
  
  queue<string> qu;
    
  for (int i = 0; i < str.length(); i++) {
    qu.push(str.substr(i, 1));
  }

  while(!qu.empty()) {
    cout << qu.front();
    qu.pop();
  }
  cout << endl;
  return 0;
}
