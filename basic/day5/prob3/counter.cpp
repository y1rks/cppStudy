#include "counter.h"

int Counter::totalCount = 0;

//  コンストラクタ（カウント回数を0で初期化）
Counter::Counter() : m_count(0)
{
}
void Counter::reset(){
    totalCount -= m_count;
    m_count = 0;
}
void Counter::count(){
    totalCount++;
    m_count++;
}
int Counter::getCount(){
    return m_count;
}

int Counter::getTotalCount() {
    return totalCount;
}
