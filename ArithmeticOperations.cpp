//두 자연수 A와 B가 주어진다. 이때, A+B, A-B, A*B, A/B(몫), A%B(나머지)를 출력하는 프로그램을 작성하시오. 
/*
Two natural numbers, A and B, are given. Write a program that prints the results of the following operations:

A + B (sum)
A - B (difference)
A * B (product)
A / B (quotient)
A % B (remainder)
*/

#include <iostream>
using namespace std;

int main(){
    int a;
    int b;

    cin >> a >> b;
    cout << a+b << "\n" << a-b << "\n" << a*b << "\n" << a/b << "\n" << a%b;
}