#include <iostream>
#include "object.h"

using namespace std;

int main(){
    Object *o1, *o2, *o3;
    o1 = new Object();
    o2 = new Object();
    o3 = new Object();
    cout << "オブジェクトの数:" << Object::getObjectNum() << endl;
    delete o3;
    cout << "オブジェクトの数:" << Object::getObjectNum() << endl;
    delete o2;
    delete o1;
    return 0;
}
