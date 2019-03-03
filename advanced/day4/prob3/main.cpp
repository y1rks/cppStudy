#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> v0, v1, v2, v3, v4, v5, v6, v7, v8, v9;
  int input;

  while(true) {
    if (input == -1) break;

    cin >> input;

    switch(input % 10) {
      case 0:
        v0.push_back(input);
        break;
      case 1:
        v1.push_back(input);
        break;
      case 2:
        v2.push_back(input);
        break;
      case 3:
        v3.push_back(input);
        break;
      case 4:
        v4.push_back(input);
        break;
      case 5:
        v5.push_back(input);
        break;
      case 6:
        v6.push_back(input);
        break;
      case 7:
        v7.push_back(input);
        break;
      case 8:
        v8.push_back(input);
        break;
      case 9:
        v9.push_back(input);
        break;
      default:
        break;
    }

  }

  cout << "一の位が0: ";
  for (int i = 0; i < v0.size(); i++) {
    cout << v0[i] << " ";

  }
  cout << endl;

  cout << "一の位が1: ";
  for (int i = 0; i < v1.size(); i++) {
    cout << v1[i] << " ";

  }
  cout << endl;
  
  cout << "一の位が2: ";
  for (int i = 0; i < v2.size(); i++) {
    cout << v2[i] << " ";

  }
  cout << endl;

  cout << "一の位が3: ";
  for (int i = 0; i < v3.size(); i++) {
    cout << v3[i] << " ";

  }
  cout << endl;

  cout << "一の位が4: ";
  for (int i = 0; i < v4.size(); i++) {
    cout << v4[i] << " ";

  }
  cout << endl;

  cout << "一の位が5: ";
  for (int i = 0; i < v5.size(); i++) {
    cout << v5[i] << " ";

  }
  cout << endl;

  cout << "一の位が6: ";
  for (int i = 0; i < v6.size(); i++) {
    cout << v6[i] << " ";

  }
  cout << endl;

  cout << "一の位が7: ";
  for (int i = 0; i < v7.size(); i++) {
    cout << v7[i] << " ";

  }
  cout << endl;

  cout << "一の位が8: ";
  for (int i = 0; i < v8.size(); i++) {
    cout << v8[i] << " ";

  }
  cout << endl;

  cout << "一の位が9: ";
  for (int i = 0; i < v9.size(); i++) {
    cout << v9[i] << " ";

  }
  cout << endl;

  return 0;
}
