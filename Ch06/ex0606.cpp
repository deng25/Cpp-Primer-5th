#include <iostream>
using std::cin;
using std::cout;
using std::endl;

long long factorial(unsigned n)
{
    long long result = 1; // 局部自动变量
    static size_t called_times = 0; // 局部静态变量

    if (!n) {
        cout << "本阶乘函数已累计被调用" << ++called_times << "次。" << endl;
        return 1;
    }
    for (int i = n; i > 0; --i) {
        result *= i;
    }

    cout << "本阶乘函数已累计被调用" << ++called_times << "次。" << endl;
    return result;
}

int main()
{
    unsigned n;
    while (cout << "请输入一个正整数：", cin >> n) {
        cout << n << "!=" << factorial(n) << endl;
    }

    return 0;
}
