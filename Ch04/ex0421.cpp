#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> v;
    cout << "请为vector容器填值。" << endl;
    cout << "请输入一个整数（按Ctrl + Z结束输入）：";
    int n;
    while (cin >> n) {
        v.push_back(n);
        cout << "请输入一个整数（按Ctrl + Z结束输入）：";
    }
    cout << "输出容器：" << endl;
    for (auto i : v) {
        cout << i << ' ';
    }
    cout << endl;

    // ? :
    for (auto &i : v) {
        i = (i % 2 == 0) ? i : i * 2;
    }

    cout << "将容器内奇数的值翻倍后，输出容器：" << endl;
    for (auto i : v) {
        cout << i << ' ';
    }
    cout << endl;
    
    return 0;
}
