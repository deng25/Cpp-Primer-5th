#include <iostream>
#include <string>
using std::string;
using std::getline;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    string str1, str2;

    cout << "请输入两个字符串。" << endl;
    cout << "请输入字符串一：";
    cin >> str1;
    cout << "请输入字符串二：";
    cin >> str2;

    if (str1 != str2) {
        if (str1 > str2) {
            cout << "较大的字符串是" << str1 << endl;
        }
        else {
            cout << "较大的字符串是" << str2 << endl;
        }

        if (str1.size() > str2.size()) {
            cout << "较长的字符串是" << str1 << endl;
        }
        else {
            cout << "较长的字符串是" << str2 << endl;
        }
    }
    else {
        cout << "两个字符串相等。" << endl;
    }

    return 0;
}
