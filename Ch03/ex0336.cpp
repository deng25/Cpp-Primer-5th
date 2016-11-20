#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    constexpr size_t sz = 5;
    int ia1[sz], ia2[sz], n;
    bool array_not_equal = false;

    cout << "请为第一个数组填值（长度为" << sz << "）：" << endl;
    for (auto &i : ia1) {
        cin >> n;
        i = n;
    }

    cout << "请为第二个数组填值（长度为" << sz << "）：" << endl;
    for (auto &i : ia2) {
        cin >> n;
        i = n;
    }

    for (auto p1 = ia1, p2 = ia2, pe = ia1 + sz; p1 < pe; ++p1, ++p2) {
        if (*p1 != *p2) {
            array_not_equal = true;
            cout << *p1 << "和" << *p2 << "不一致！" << endl;
            p1 = pe - 1; // ==break;
        }
    }

    if (array_not_equal) {
        cout << "经过比较，两个数组不相等。" << endl;
    }
    else {
        cout << "经过比较，两个数组相等。" << endl;
    }
    cout << endl;

    // use vector

    vector<int> iv1(sz), iv2(sz);
    bool vector_not_equal = false;

    cout << "请为第一个容器填值（长度为" << sz << "）：" << endl;
    for (auto &i : iv1) {
        cin >> n;
        i = n;
    }

    cout << "请为第二个容器填值（长度为" << sz << "）：" << endl;
    for (auto &i : iv2) {
        cin >> n;
        i = n;
    }

    for (auto it1 = iv1.cbegin(), it2 = iv2.cbegin(); it1 != iv1.cend() && it2 != iv2.cend(); ++it1, ++it2) {
        if (*it1 != *it2) {
            vector_not_equal = true;
            cout << *it1 << "和" << *it2 << "不一致！" << endl;
            it1 = iv1.cend() - 1; // ==break;
            it2 = iv1.cend() - 2; // ==break;
        }
    }

    if (vector_not_equal) {
        cout << "经过比较，两个容器不相等。" << endl;
    }
    else {
        cout << "经过比较，两个容器相等。" << endl;
    }

    return 0;
}
