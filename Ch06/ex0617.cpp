#include <iostream>
#include <string>
#include <cctype>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::getline;

bool have_upper(const string & s)
{
    for (auto c : s) {
        if (isupper(c)) {
            return true;
        }
    }

    return false;
}

void go_lower(string & s)
{
    for (auto & c : s) {
        if (isupper(c)) {
            c = tolower(c);
        }
    }
}

int main()
{
    string str;
    cout << "请输入任意单词：";
    getline(cin, str);
    bool had_upper = have_upper(str);
    cout << "字符串中" << (had_upper ? "含有" : "不含") << "大写字母。" << endl;

    if (had_upper) {
        go_lower(str);
        cout << "全都改成小写形式后：\n" << str << endl;
    }

    return 0;
}
