#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> vi1, vi2;
    int n;
    cout << "请为第一个vector容器填值（输入#表示结束）：" << endl;
    while (cin >> n) {
        vi1.push_back(n);
    }
    cin.clear();    // 清除错误状态
    cin.ignore();   // 跳过无效数据
    cout << "请为第二个vector容器填值（输入#表示结束）：" << endl;
    while (cin >> n) {
        vi2.push_back(n);
    }

    // 挑出长度较短的容器
    decltype(vi1.size()) sz;
    if (vi1.size() < vi2.size()) {
        sz = vi1.size();
    }
    else if (vi2.size() < vi1.size()) {
        sz = vi2.size();
    }
    else {
        cout << "两个vector对象等长，程序结束。" << endl;
        return -1;
    }

    cout << "两个容器的值输出如下：" << endl;
    for (auto i : vi1) {
        cout << i << ' ';
    }
    cout << endl;
    for (auto i : vi2) {
        cout << i << ' ';
    }
    cout << endl;

    bool prefixion = true;
    for (decltype(sz) i = 0; i < sz; ++i) {
        if (vi1[i] != vi2[i]) {
            prefixion = false;
        }
    }

    cout << "两个vector对象" << (prefixion ? "[存在]" : "[不存在]") << "前缀关系。" << endl;

    return 0;
}
