#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int a, b, c, d;

    cout << "请输入四个整数。" << endl;
    cout << "请输入整数a的值：";
    cin >> a;
    cout << "请输入整数b的值：";
    cin >> b;
    cout << "请输入整数c的值：";
    cin >> c;
    cout << "请输入整数d的值：";
    cin >> d;

    cout << "条件是a大于b、b大于c、c大于d。" << endl;
    if (a > b && b > c && c > d) {
        cout << "OK！满足条件，已进入if语句体。" << endl;
    }
    else {
        cout << "不满足条件，未进入if语句体。" << endl;
    }

    return 0;
}
