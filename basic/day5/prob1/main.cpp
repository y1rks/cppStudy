#include <iostream>
#include "function.h"

using namespace std;

int main(){
    int m = 3, n = 1;
    cout << m << "と" << n << "のうち、最大のものは" << Function::max(m, n) << endl;
    cout << m << "と" << n << "のうち、最大のものは" << Function::min(m, n) << endl;
    return 0;
}
