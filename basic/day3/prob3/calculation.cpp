#include "calculation.h"

void Calculation::setNumber1(int n) {
    this->m_number1 = n;
}
void Calculation::setNumber2(int n) {
    this->m_number2 = n;
}
int Calculation::getNumber1() {
    return this->m_number1;
}
int Calculation::getNumber2() {
    return this->m_number2;
}
int Calculation::add() {
    return this->m_number1 + this->m_number2;
}
int Calculation::sub() {
    return this->m_number1 - this->m_number2;
};
