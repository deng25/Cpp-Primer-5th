#include <iostream>
using std::cin;
using std::cout;
using std::endl;

unsigned absolute_value(int n)
{
    if (n >= 0)
        return n;
    else
        return -n;
}

int main()
{
    int n;
    cout << "请输入一个整数：" << endl;
    while (cin >> n) {
        cout << '|' << n << "|=" << absolute_value(n) << endl;
    }

    return 0;
}
