#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::getline;

int main()
{
    string s1, s2;
    do {
        cout << "请输入两条字符串。" << endl;
        cout << "请输入第一条：";
        getline(cin, s1);
        cout << "请输入第二条：";
        getline(cin, s2);
        if (s1.size() < s2.size()) {
            cout << s1 << endl;
        }
        else {
            cout << s2 << endl;
        }
    } while (cin);

    return 0;
}
