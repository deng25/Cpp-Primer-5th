#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

inline bool isShorter(const string &s1, const string &s2)
{
    return s1.size() < s2.size();
}

int main(int argc, const char *argv[])
{
    string str1, str2;

    cout << "请输入两个字符串。" << endl;
    cout << "请输入字符串一：";
    cin >> str1;
    cout << "请输入字符串二：";
    cin >> str2;

    cout << "较长的是第" << (isShorter(str1, str2) ? "二" : "一") << "个字符串。" << endl;

    return 0;
}