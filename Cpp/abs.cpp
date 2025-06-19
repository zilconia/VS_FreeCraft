// 参照URL：https://qiita.com/e869120/items/518297c6816adb67f9a5

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // 例 1: 2 つの小数 a と b を入力し、a-b の絶対値を小数で出力します。
    double a, b;
    cout << "実数1を入力："; cin >> a;
    cout << "実数2を入力："; cin >> b;
    printf("%lf + %lf = %.12lf\n\n", a, b, abs(a - b));
    return cout << "\n終了します。\n", 0;
}