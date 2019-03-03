#include <iostream>
#include <vector>

using namespace std;


int main() {
  vector<int> nums;
  int input;
  
  while(true) {
    cin >> input;
    if (input == -1) {
      break;
    }

    nums.push_back(input);
  }

  if (nums.size() <= 0) {
    return 0;
  }
  
  int maxNum = nums[0];

  for (int i = 0; i < nums.size(); i++ ) {
    if (maxNum < nums[i]) {
      maxNum = nums[i];
    }
  }

  cout << "maxNum is ..." << maxNum << endl;

  return 0;
}
