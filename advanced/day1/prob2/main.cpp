#include <iostream>
 
using namespace std;
 
void changeNumber(int&);
 
int main() {
    int n = 5;
    cout << "変更前 : " << n << endl;
    changeNumber(n);
    cout << "変更後 : " << n << endl;
    return 0; 
}
 
void changeNumber(int& n){
    n *= 2;    //  数値
}
