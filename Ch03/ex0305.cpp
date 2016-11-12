#include <iostream>
#include <string>
using std::string;
using std::getline;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    string str, sum, sum2;
        
    cout << "请输入任意字符串（按Ctrl + Z结束输入）：";
    if (cin >> str) {
        sum2 = sum = str;
        while (cin >> str) {
            sum += str;
            sum2 = sum2 + " " + str;
        }
    }
    
    cout << sum << endl;
    cout << sum2 << endl;
    return 0;
}
