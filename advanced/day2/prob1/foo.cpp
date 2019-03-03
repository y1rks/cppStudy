#include "foo.h"
#include "bar.h"
#include <iostream>

using namespace std;

void Foo::hoge(){
    cout << "Foo::hoge()" << endl;
}
void Foo::fuga(Bar* pBar){
    cout << "Foo::fuga()" << endl;
    pBar->func2();
}
