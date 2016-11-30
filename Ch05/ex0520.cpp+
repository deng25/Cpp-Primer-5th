#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string words, nowWord, prevWord;
    bool same = false;
    cout << "请输入一些单词（按Ctrl + Z终止输入）：";
    while (cin >> words) {
        prevWord = nowWord;
        nowWord = words;
        if (nowWord == prevWord) {
            cout << "出现了连续的单词" << prevWord << "。" << endl;
            same = true;
            break;
        }
    }

    if (!same) {
        cout << "没有任何单词是连续重复出现的。" << endl;
    }

    return 0;
}
