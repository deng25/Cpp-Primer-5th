#include <iostream>
#include <string>
using std::string;
using std::getline;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    string str, str2;
    cout << "请输入任意字符串：";
    getline(cin, str);
    str2 = str; // copy
    cout << "你输入的是：" << str << endl;
    // while()
    cout << "转换后，得：";
    decltype(str.size()) i = 0;
    while (i != str.size()) {
        str[i] = 'X';
        ++i;
    }
    cout << str << "（while循环）" << endl;
    // for()
    cout << "转换后，得：";
    for (decltype(str2.size()) i = 0; i != str2.size(); ++i) {
        str2[i] = 'X';
    }
    cout << str2 << "（for循环）" << endl;
    return 0;
}
