#include <iostream>

#include "counter.h"

using namespace std;

int main() {
    Counter c1, c2;
    c1.count();
    c2.count();
    c2.count();
    c2.reset();
    c1.count();
    c1.count();
    c2.count();
    cout << "c1のカウント数：" << c1.getCount() << endl;
    cout << "c2のカウント数：" << c2.getCount() << endl;
    cout << "トータルのカウント数:" << c1.getCount() + c2.getCount() << endl;
    cout << "トータルのカウント数2:" << Counter::getTotalCount() << endl;
    return 0;
}
