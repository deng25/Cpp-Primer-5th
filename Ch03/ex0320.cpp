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

    cout << endl;
    for (auto i : iv) {
        cout << i << " ";
    }
    cout << "，两两相加的结果如下：" << endl;
    for (decltype(iv.size()) i = 0; i != iv.size(); i += 2) {
        if (i + 1 > iv.size() - 1) {
            cout << iv[i] << " 是中位元素，已没有相邻的元素可与之相加。" << endl;
            i = iv.size() - 2; // 人工break;
        }
        else {
            cout << iv[i] << " + " << iv[i + 1] << " = " << iv[i] + iv[i + 1] << endl;
        }
    }

    cout << endl;
    for (auto i : iv) {
        cout << i << " ";
    }
    cout << "，首尾相加的结果如下：" << endl;
    for (decltype(iv.size()) i = 0; i != iv.size(); ++i) {
        if (i >= iv.size() / 2) {
            i = iv.size() - 1; // 人工break;
        }
        else {
            cout << iv[i] << " + " << iv[iv.size() - (i + 1)] << " = " << iv[i] + iv[iv.size() - (i + 1)] << endl;
        }
    }

    return 0;
}
