#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    // 以10分为一个分数段统计成绩的数量：0~9，10~19，…，90~99，100
    vector<unsigned> scores(11, 0); // 11个分数段
    unsigned grade;

    auto it = scores.begin();
    cout << "请输入成绩（按Ctrl + Z结束输入）：" << endl;
    while (cin >> grade) {
        if (grade <= 100) {
            auto i = grade / 10;
            ++*(it + i);
        }
    }

    cout << "成绩分段结果是：" << endl;
    for (; it != scores.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
