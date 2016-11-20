#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    constexpr size_t sz = 5;
    vector<int> iv(sz);
    int n;

    cout << "请为整型vector容器填值（长度为" << sz << "）：" << endl;
    for (auto &i : iv) {
        cin >> n;
        i = n;
    }
    cout << "输出容器内容：";
    for (auto i : iv) {
        cout << i << " ";
    }
    cout << endl;

    int arr[sz];
    size_t i = 0;
    for (auto it = iv.begin(); it != iv.end(); ++it, ++i) {
        arr[i] = *it;
    }
    cout << "用该容器初始化数组后，输出数组内容：" << endl;
    for (auto i : arr) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
