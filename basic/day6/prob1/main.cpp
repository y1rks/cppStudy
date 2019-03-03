#include <iostream>
#include "fighter.h"

using namespace std;

int main(){
    Fighter f;  //  戦闘機クラス
    Airplane a; //  飛行機クラス
    //  飛行機が飛行する
    a.fly();
    //  戦闘機が飛行する
    f.fly();
    //  戦闘機が戦闘する
    f.fight();
    return 0;
}
