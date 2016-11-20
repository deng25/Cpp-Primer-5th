#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int n;
    cout << "请输入一个整数：";
    cin >> n;
    cout << n << "是" << (n % 2 == 0 ? "偶数" : "奇数") << endl;

    return 0;
}
