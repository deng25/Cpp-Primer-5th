#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::getline;
using std::vector;

int main()
{
    vector<string> sv;

    cout << "请用英文输入一些单词（按Ctrl + Z结束输入）：";
    string words;
    while (cin >> words) {
        sv.push_back(words);
    }

    string currWord, prevWord, maxWord;
    unsigned cnt = 1, maxCnt = 0;
    for (auto w : sv) {
        prevWord = currWord;
        currWord = w;
        if (prevWord == currWord) {
            ++cnt;
            ++maxCnt;
            if (cnt > maxCnt) {
                maxWord = currWord;
            }
        }
        else {
            cnt = 1;
        }
    }

    cout << "单词" << maxWord << "连续出现了" << maxCnt << "次。" << endl;

    return 0;
}
