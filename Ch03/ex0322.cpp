#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::getline;

int main()
{
    vector<string> sv;
    string str;
    cout << "请用英文输入几句话（按Ctrl + Z结束输入）：" << endl;
    while (getline(cin, str)) {
        sv.push_back(str);
    }

    auto it = sv.begin();
    if (!it->empty()) {
        for (auto it2 = it->begin(); it2 != it->end(); ++it2) { // 各元素逐字
            *it2 = toupper(*it2);
        }
    }

    cout << "第一句话改成全大写后的结果是：" << endl;
    for (; it != sv.end(); ++it) {
        cout << *it << endl;
    }

    return 0;
}
