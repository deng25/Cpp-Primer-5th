#include "Chapter6.h"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    unsigned n;
    cout << "请输入一个正整数：" << endl;
    while (cin >> n) {
        cout << n << "!=" << factorial(n) << endl;
    }
    return 0;
}
