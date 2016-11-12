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

    cout << "请用英文输入一行句子：";
    getline(cin, str);
    cout << "你刚才输入的是：\n" << str << endl;

    cout << "请用英文再输入一行句子：";
    cin >> str;
    cout << "你刚才输入的是：\n" << str << endl;

    return 0;
}
