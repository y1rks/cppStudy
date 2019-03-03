#ifndef _TWOSTRINGS_H_
#define _TWOSTRINGS_H_

class Calculation {
private:
    int m_number1;
    int m_number2;
public:
    void setNumber1(int n);
    void setNumber2(int n);
    int getNumber1();
    int getNumber2();
    int add();
    int sub();
};

#endif // _TWOSTRINGS_H_
