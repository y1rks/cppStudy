#include "object.h"

//  静的メンバ変数の初期値を設定
int Object::m_objectNum = 0;

//  コンストラクタ
Object::Object()
{
    //  オブジェクトの数をカウントする
    m_objectNum++;
}
//  デストラクタ
Object::~Object()
{
    //  オブジェクトの数をカウントする
    m_objectNum--;
}

int Object::getObjectNum() {
    return m_objectNum;
}
