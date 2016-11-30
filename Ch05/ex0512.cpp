#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::getline;

int main()
{
    unsigned ffCnt = 0;
    unsigned flCnt = 0;
    unsigned fiCnt = 0;
    bool currF = false;
    bool prevF = false;

    cout << "请用英文输入一句话：";
    string words;
    getline(cin, words);
    for (auto ch : words) {
        if (ch == 'f') {
            if (!prevF) {
                currF = true;
            }
        }

        if (prevF) {
            switch (ch) {
            case 'f': ++ffCnt; break;
            case 'i': ++fiCnt; break;
            case 'l': ++flCnt; break;
            default: break;
            }
            // reset
            currF = false;
            prevF = false;
        }

        if (currF) {
            prevF = true;
        }
    }

    cout << "ff出现了" << ffCnt << "次。" << endl;
    cout << "fl出现了" << flCnt << "次。" << endl;
    cout << "fi出现了" << fiCnt << "次。" << endl;

    return 0;
}
