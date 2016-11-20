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

    // 两两相加
    for (auto it = iv.cbegin(); it != iv.cend(); ++it) {
        cout << *it;
        if (it != iv.cend() - 1)
            cout << " ";
        else
            cout << "，两两相加的结果如下：" << endl;
    }

    for (auto it = iv.begin(); it != iv.end(); it += 2) {
        if (it + 1 == iv.end()) {
            cout << *it << " 是中位元素，已没有相邻的元素可与之相加。" << endl;
            it = iv.end() - 2; // 人工break;
        }
        else {
            cout << *it << " + " << *(it + 1) << " = " << *it + *(it + 1) << endl;
        }
    }

    // 首尾相加
    cout << endl;
    for (auto it = iv.cbegin(); it != iv.cend(); ++it) {
        cout << *it;
        if (it != iv.cend() - 1)
            cout << " ";
        else
            cout << "，首尾相加的结果如下：" << endl;
    }

    vector<int>::difference_type i = 1;
    auto mid = iv.begin() + (iv.end() - iv.begin()) / 2;
    for (auto it = iv.begin(); it != iv.end(); ++it) {
        if (it >= mid) {
            it = iv.end() - 1; // 人工break;
        }
        else {
            cout << *it << " + " << *(iv.end() - i) << " = " << *it + *(iv.end() - i) << endl;
        }
        ++i;
    }

    return 0;
}
