#ifndef _FIGHTERAIRCRAFT_H_
#define _FIGHTERAIRCRAFT_H_
 
#include <iostream>
#include <string>

#include "airPlane.h"
 
using namespace std;
 
//  戦闘機クラス
class FighterAiracraft : public AirPlane {
public:
    //  コンストラクタ
    FighterAiracraft();
    //  飛行する
    void fly();
    //  戦闘する
    void fight();
};
 
#endif // _FIGHTERAIRCRAFT_H_
