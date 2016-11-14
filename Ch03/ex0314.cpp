#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> iv;
    int n;
    cout << "请输入一组整数（按Ctrl + Z结束输入）：" << endl;

    while (cin >> n) {
        iv.push_back(n);
    }

    return 0;
}
