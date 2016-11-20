#include <iostream>
#include <string>
#include <cstring>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::getline;

int main()
{
    string s1, s2;

    cout << "请为string字符串一输入内容：";
    getline(cin, s1);
    cout << "请为string字符串二输入内容：";
    getline(cin, s2);

    if (s1 == s2) {
        cout << "两个string字符串内容相等。" << endl;
    }
    else {
        cout << "两个string字符串内容不相等。" << endl;
    }

    // C串
    constexpr size_t sz = 80;
    char cstr1[sz], cstr2[sz];

    cout << "请为C风格字符串一输入内容：";
    cin >> cstr1;
    cout << "请为C风格字符串二输入内容：";
    cin >> cstr2;

    if (strcmp(cstr1, cstr2) == 0) {
        cout << "两个C风格字符串内容相等。" << endl;
    }
    else {
        cout << "两个C风格字符串内容不相等。" << endl;
    }

    return 0;
}
