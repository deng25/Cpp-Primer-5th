#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::getline;

int main()
{
    unsigned vowelCnt = 0;
    string words;
    cout << "请用英文输入一句话";
//     cout << "：";
//     getline(cin, words);
//     for (auto c : words) {
//         if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
//             ++vowelCnt;
//         }
//     }

    // 按题目要求，要用【一系列】if语句：
    cout << "（按Ctrl + Z结束输入）：";
    char ch;
    while (cin >> ch) {
        if (ch == 'a') {
            ++vowelCnt;
        }
        else if (ch == 'e') {
            ++vowelCnt;
        }
        else if (ch == 'i') {
            ++vowelCnt;
        }
        else if (ch == 'o') {
            ++vowelCnt;
        }
        else if (ch == 'u') {
            ++vowelCnt;
        }
        else
            ; //
    }

    cout << "一共出现了" << vowelCnt << "个元音字母。" << endl;

    return 0;
}
