#include <iostream>
#include <vector>
#include <iterator>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::begin;
using std::end;

int main()
{
    constexpr size_t sz = 5;
    int arr[sz], n;
    cout << "请为整型数组填值（长度为" << sz << "）：" << endl;
    for (auto &i : arr) {
        cin >> n;
        i = n;
    }

    cout << "输出数组内容：";
    for (auto i : arr) {
        cout << i << " ";
    }
    cout << endl;

    vector<int> iv(begin(arr), end(arr));
    cout << "用该数组初始化vector容器后，输出容器内容：" << endl;
    for (auto i : iv) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
