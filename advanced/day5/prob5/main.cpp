#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
  string inputStr;
  queue<string> q;

  while(true) {
   cin >> inputStr;

   if (inputStr == "-1") break;
   
   q.push(inputStr);
   
  }

  while(!q.empty()) {
    cout << q.front() << endl;
    q.pop();
  }
  return 0;
}
