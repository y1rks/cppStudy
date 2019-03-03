#include <iostream>
#include <string>
 
using namespace std;
 
template <typename T>
T max1(T x, T y) {
  return x > y ? x : y;
}
 
int main(){
    cout << max1<int>(1, 2) << endl;
    cout << max1<double>(1.75, 3.12) << endl;
    string s1 = "aiu",s2 = "eo";
    cout << max1<string>(s1,s2) << endl;
    return 0;
}
 
