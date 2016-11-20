#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int n;

    cout << "请输入一个整数（输入42结束）：" << endl;
    while (cin >> n && n != 42) {
        cout << "你刚才输入的是" << n << "，请继续输入整数（输入42结束）：" << endl;
    }
    cout << "已跳出循环，程序结束。" << endl;

    return 0;
}
