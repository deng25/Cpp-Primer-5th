#include <iostream>
#include <string>
using std::string;
using std::getline;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    string str;
    cout << "请输入任意字符串：";
    getline(cin, str);
    cout << "你输入的是：" << str << endl;
    cout << "转换后，得：";
    for (auto &c : str) {
        c = 'X';
    }
    cout << str << endl;
    return 0;
}
