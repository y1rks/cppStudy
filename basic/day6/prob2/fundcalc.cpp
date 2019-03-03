#include "fundcalc.h"

FundCalc::FundCalc() : m_number1(0), m_number2(0)
{
}
//  一つ目の数を設定
void FundCalc::setNumber1(double number)
{
    m_number1 = number;
}
//  二つ目の数を設定
void FundCalc::setNumber2(double number)
{
    m_number2 = number;
}
//  一つ目の数を設定
double FundCalc::getNumber1()
{
    return m_number1;
}
//  二つ目の数を設定
double FundCalc::getNumber2()
{
    return m_number2;
}
//  二つの数の和を出力
double FundCalc::add()
{
    return m_number1 + m_number2;
}
//  二つの数の差を出力
double FundCalc::sub()
{
    return m_number1 - m_number2;
}
