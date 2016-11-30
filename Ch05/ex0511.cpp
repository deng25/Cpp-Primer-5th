#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::getline;

int main()
{
    unsigned vowelCnt, aCnt, eCnt, iCnt, oCnt, uCnt, tabCnt, NLCnt, spaceCnt;
    aCnt = eCnt = iCnt = oCnt = uCnt = tabCnt = NLCnt = spaceCnt = 0;

    cout << "请用英文输入一句话：";
    string words;
    getline(cin, words);
    for (auto ch : words) {
        switch (ch) {
        case '\t': ++tabCnt; break;
        case '\n': ++NLCnt; break;
        case ' ': ++spaceCnt; break;
        case 'a': case 'A': ++aCnt; break;
        case 'e': case 'E': ++eCnt; break;
        case 'i': case 'I': ++iCnt; break;
        case 'o': case 'O': ++oCnt; break;
        case 'u': case 'U': ++uCnt; break;
        default: break;
        }
    }
    vowelCnt = aCnt + eCnt + iCnt + oCnt + uCnt;

    cout << "制表符出现了" << tabCnt << "次。" << endl;
    cout << "换行符出现了" << ++NLCnt << "次。" << endl;
    cout << "空格出现了" << spaceCnt << "次。" << endl;
    cout << "一共出现了" << vowelCnt << "个元音字母，其中" << endl;
    cout << "a/A出现了" << aCnt << "次。" << endl;
    cout << "e/E出现了" << eCnt << "次。" << endl;
    cout << "i/I出现了" << iCnt << "次。" << endl;
    cout << "o/O出现了" << oCnt << "次。" << endl;
    cout << "u/U出现了" << uCnt << "次。" << endl;

    return 0;
}
