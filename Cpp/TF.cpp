// 参照先URL：https://qiita.com/e869120/items/518297c6816adb67f9a5

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // 例 1: 悪い例です。三角関数は弧度法を使いましょう（この場合 -0.988031... と出力されます）
    printf("%.12lf\n", sin(30));

    // 例 2: 三角関数の利用例。x を角度で入力し、sin(x),cos(x),tan(x) の値を出力します。
    double pi = 3.141592653589793238;
    double x;
    cout << "角度を入力："; cin >> x;
    printf("%.12lf\n", sin(x / 180.0 * pi));
    printf("%.12lf\n", cos(x / 180.0 * pi));
    printf("%.12lf\n", tan(x / 180.0 * pi));
    return cout << "\n終了します。\n", 0;
}