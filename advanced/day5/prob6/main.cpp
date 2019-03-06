#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
  string inputStr;
  stack<string> q;

  while(true) {
   cin >> inputStr;

   if (inputStr == "-1") break;
   
   q.push(inputStr);
   
  }

  while(!q.empty()) {
    cout << q.top() << endl;
    q.pop();
  }
  return 0;
}
