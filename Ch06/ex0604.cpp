#include <iostream>
using std::cin;
using std::cout;
using std::endl;

long long factorial(unsigned n)
{
    if (!n) {
        return 1;
    }

    long long result = 1;

    for (int i = n; i > 0; --i) {
        result *= i;
    }

    return result;
}

int main()
{
    unsigned n;
    cout << "请输入一个正整数：" << endl;
    while (cin >> n) {
        cout << n << "!=" << factorial(n) << endl;
    }

    return 0;
}
