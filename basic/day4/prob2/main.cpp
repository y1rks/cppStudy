#include <iostream>
#include "hoge.h"

using namespace std;

int main(){
    Hoge* pH;
    pH = new Hoge();
    pH->foo();
    delete pH;
    return 0;
}
