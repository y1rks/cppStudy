#include <iostream>
#include <string>
#include <map>
#include <stack>

using namespace std;

int main() {

  stack<string> st;
  map<string, string> m;
  m["1"] = "一";
  m["2"] = "二";
  m["3"] = "三";
  m["4"] = "四";
  m["5"] = "五";
  m["6"] = "六";
  m["7"] = "七";
  m["8"] = "八";
  m["9"] = "九";
  m["0"] = "〇";

  string str;

  cout << "整数の値を入力してください: ";
  cin >> str;
  
  int count = 0;
  for (int i = str.length(); i >= 0 ; i--) {
    string subStr = str.substr(i, 1);
    st.push(m[subStr]);
    if (count % 3 == 0 && count != 0 && i != 0){
      st.push(",");
    }
    count++;
  }
  
  while (!st.empty()) {
    cout << st.top();
    st.pop();
  }
  cout << endl;

  return 0;
}
