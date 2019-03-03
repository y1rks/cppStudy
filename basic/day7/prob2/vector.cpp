#include "vector.h"

//  コンストラクタ
Vector::Vector() {
    this->m_x = 0;
    this->m_y = 0;
}

Vector::Vector(double m_x, double m_y) {
    this->m_x = m_x;
    this->m_y = m_y;
}
//  成分の設定
void Vector::set(double x, double y)
{
    m_x = x;
    m_y = y;
}
//  x成分の取得
double Vector::getX()
{
    return m_x;
}
//  y成分の取得
double Vector::getY()
{
    return m_y;
}
