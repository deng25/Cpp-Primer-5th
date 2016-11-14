#include <iostream>
#include <vector>
#include <string>
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
    cout << "请输入一组字符串（按Ctrl + Z结束输入）：" << endl;

    while (getline(cin, str)) {
        sv.push_back(str);
    }

    return 0;
}
