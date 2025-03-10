#include <iostream>
using namespace std;

int main(){
    int num1;
    int num2;
    int d, e, f;

    cin >> num1 >> num2;

    int num3 = num2;

    f = num2%10;
    num2 = num2/10;
    e = num2%10;
    num2 = num2/10;
    d = num2%10;

    cout << num1*f << endl;
    cout << num1*e << endl;
    cout << num1*d << endl;
    cout << num1*num3 << endl;
}