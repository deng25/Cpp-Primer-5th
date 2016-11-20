#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> iv(10);
    int n;
    cout << "请输入10个整数：" << endl;
    for (auto it = iv.begin(); it != iv.end(); ++it) {
        cin >> n;
        *it = n;
    }

    cout << "容器内各元素的值分别是：" << endl;
    for (auto it = iv.cbegin(); it != iv.cend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // double them
    for (auto it = iv.begin(); it != iv.end(); ++it) {
        *it *= 2;
    }

    cout << "把它们都乘以2的结果是：" << endl;
    for (auto it = iv.cbegin(); it != iv.cend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
