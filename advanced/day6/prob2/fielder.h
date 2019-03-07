#ifndef _FIELDER_H_
#define _FIELDER_H_

#include "baseballplayer.h"

class Fielder : public BaseballPlayer {
public:
    //  コンストラクタ
    Fielder(string name,int number);
    ~Fielder();
    //  野手がプレイする
    void play();
};

#endif // _FIELDER_H_
