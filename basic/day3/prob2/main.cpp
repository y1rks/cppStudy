#include <iostream>
#include "twostrings.h"
 
using namespace std;
 
int main(){
    TwoStrings s;
    s.setString1("Hello");
    s.setString2("World");
    cout << "一つ目の文字列は" << s.getString1() << endl;
    cout << "二つ目の文字列は" << s.getString2() << endl;
    cout << "二つの文字列を合成したものは" << s.getConnectedString() << endl;
    cout << "合成した文字列の長さは" << s.getConnectedLength() << "文字" << endl;
    return 0;
}
