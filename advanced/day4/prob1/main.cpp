#include <iostream>
#include <vector>

using namespace std;


int main () {
  vector<int> evenNums;
  vector<int> oddNums;

  int input;
  while(true) {
    cin >> input;

    if(input == -1) break;

    if (input % 2 == 0) {
      evenNums.push_back(input);
    } else {
      oddNums.push_back(input);
    }
  }

  cout << "everNum: ";
  for (int i = 0; i < evenNums.size(); i++) {
    cout << evenNums[i] << " ";
  }
  cout << endl;

  cout << "oddNum: ";
  for (int i = 0; i < oddNums.size(); i++) {
    cout << oddNums[i] << " ";
  }
  cout << endl;

  return 0;
}
