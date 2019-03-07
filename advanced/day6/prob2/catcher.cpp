#include "catcher.h"

Catcher::Catcher(string name, int number) {
    m_name = name;
    m_number = number;
    m_kind = "キャッチャー";
}

Catcher::~Catcher(){}

void Catcher::play() {
    cout << "野手がプレイする" << endl;
}
