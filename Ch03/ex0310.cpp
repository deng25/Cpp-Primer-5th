#include <iostream>
#include <string>
#include <cctype>
using std::string;
using std::getline;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    string str, result;
    cout << "请输入任意字符串：";
    getline(cin, str);
    cout << "你输入的是：" << str << endl;
    cout << "去除标点符号后：";
    for (decltype(str.size()) i = 0; i != str.size(); ++i) {
        if (!ispunct(str[i])) {
            result += str[i];
        }
    }
    cout << result << endl;

    return 0;
}
