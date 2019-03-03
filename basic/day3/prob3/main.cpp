#include <iostream>
#include "calculation.h"

using namespace std;

int main(){
    Calculation c;
    c.setNumber1(8);    //  一つ目の数をセット
    c.setNumber2(9);    //  二つ目の数をセット
    //  二つの数の和を表示
    cout << c.getNumber1() << " + " << c.getNumber2() << " = " << c.add() << endl;
    //  二つの数の差を表示
    cout << c.getNumber1() << " - " << c.getNumber2() << " = " << c.sub() << endl;
    return 0;
}
