#ifndef _FUNDCALC_H_
#define _FUNDCALC_H_

class FundCalc {
private:
    double m_number1;   //  一つ目の数
    double m_number2;   //  二つ目の数
public:
    //  コンストラクタ
    FundCalc();
    //  一つ目の数を設定
    void setNumber1(double number);
    //  二つ目の数を設定
    void setNumber2(double number);
    //  一つ目の数を設定
    double getNumber1();
    //  二つ目の数を設定
    double getNumber2();
    //  二つの数の和を出力
    double add();
    //  二つの数の差を出力
    double sub();
};

#endif // _FUNDCALC_H_
