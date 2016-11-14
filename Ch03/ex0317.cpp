#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
    vector<string> sv;
    string str;
    cout << "请输入一组字符串（按Ctrl + Z结束输入）：" << endl;
    while (cin >> str) {
        sv.push_back(str);
    }

    cout << "全改成大写后的结果是：" << endl;
    for (auto &s : sv) {
        for (auto &c : s) {
            c = toupper(c);
        }
        cout << s << endl;
    }

    return 0;
}
