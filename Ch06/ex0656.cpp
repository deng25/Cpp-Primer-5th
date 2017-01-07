#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int f1(int a, int b)
{
    return a + b;
}

int f2(int a, int b)
{
    return a - b;
}

int f3(int a, int b)
{
    return a * b;
}

int f4(int a, int b)
{
    return a / b;
}

int main(int argc, const char *argv[])
{
    int n1, n2;
    cout << "请输入两个整数：" << endl;
    cin >> n1 >> n2;

    vector<int(*)(int, int)> v = { f1, f2, f3, f4 };

    cout << n1 << "和" << n2 << "的四则运算的结果分别是：" << endl;
    for (auto pf : v) {
        cout << pf(n1, n2) << endl;
    }

    return 0;
}