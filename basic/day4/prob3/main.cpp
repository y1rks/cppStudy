#include <iostream>

using namespace std;

int main(){
    //  配列を生成
    int* num = new int[4];
    int i;
    //  配列に値を代入
    for (i = 0; i < 4; i++){
        num[1] = i;
    }
    //  配列の内容を表示
    for (i = 0; i < 4; i++){
        cout << "num[" << i << "]=" << i << " ";
    }
    cout << endl;
    delete [] num;
    return 0;
}
