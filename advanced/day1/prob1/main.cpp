#include <iostream>
 
using namespace std;
 
int main() {
    int a = 7;
    int &n = a;
    cout << "a= " << a << endl;
    n += 3;
    cout << "a= " << a << endl;
    return 0;
}
