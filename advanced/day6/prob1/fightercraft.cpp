#include "fightercraft.h"
 
//  コンストラクタ
FighterAiracraft::FighterAiracraft()
{
    m_type = "戦闘機";
}
//  飛行する
void FighterAiracraft::fly()
{
    cout << "攻撃に出るために飛行" << endl;
}
//  戦闘する
void FighterAiracraft::fight()
{
    cout << "戦闘します" << endl;
}
