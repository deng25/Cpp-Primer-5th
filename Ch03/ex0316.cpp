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

    cout << "容器的容量为" << iv.size() << "，其中包含的元素有：" << endl;
    for (auto i : iv) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
