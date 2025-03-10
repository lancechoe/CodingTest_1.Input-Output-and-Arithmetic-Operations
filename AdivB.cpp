#include <iostream>
using namespace std;

int main(){
    double a;
    double b;

    cin >> a >> b;
    cout.precision(10);
    cout << a/b << endl;
}

/*
🔹 cout.precision(n) 기본 개념
cpp
복사
편집
std::cout.precision(n);
✅ 기본적으로 n자리까지 출력 (전체 숫자의 유효 숫자 개수)
✅ std::fixed와 같이 쓰면 → 소수점 이하 n자리까지 고정 출력
*/