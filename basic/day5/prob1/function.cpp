#include "function.h"

//  最大値を返す関数
int Function::max(int n1, int n2) {
    if (n1 < n2) {
        return n2;
    }
    return n1;
}
//  最小値を返す関数
int Function::min(int n1, int n2) {
    if (n1 > n2) {
        return n2;
    }
    return n1;
}
