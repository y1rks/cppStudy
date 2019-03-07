#ifndef _BASEBALLPLAYER_H_
#define _BASEBALLPLAYER_H_

#include <iostream>
#include <string>

using namespace std;

class BaseballPlayer {
protected:
    //  背番号
    int m_number;
    //  プレイヤーの種類
    string m_kind;
    //  名前
    string m_name;
public:
    virtual ~BaseballPlayer() {}
    //  名前の取得
    int getNumber() {
        return m_number;
    }
    //  種類の取得
    string getKind() {
        return m_kind;
    }
    //  名前の取得
    string getName() {
        return m_name;
    }
    //  プレイ（純粋仮関数)
    virtual void play()=0;
};

#endif // _BASEBALLPLAYER_H_
