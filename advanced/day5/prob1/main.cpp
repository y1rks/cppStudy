#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {

  map<string, string> m;

  m["cat"] = "猫";
  m["dog"] = "犬";
  m["bird"] = "鳥";
  m["tiger"] = "トラ";

  string str;
  cout << "Please input an animal name in English: ";
  cin >> str;

  if (m.count(str) != 0) {
    cout << "「" << m[str] << "」です。" << endl; 
  }else {
    cout << "対応するデータは登録されていません。" << endl;
  }

  return 0;
}
