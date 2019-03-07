#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
  string str;
  cout << "input an word in English: ";
  cin >> str;
  
  stack<string> st;
    
  for (int i = 0; i < str.length(); i++) {
    st.push(str.substr(i, 1));
  }

  while(!st.empty()) {
    cout << st.top();
    st.pop();
  }
  cout << endl;
  return 0;
}
