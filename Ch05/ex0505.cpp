#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    int grade = 0;
    cout << "请输入成绩：";
    cin >> grade;
    string lettergrade;
    if (grade >= 0 && grade <= 100) {
        if (grade < 60)
            lettergrade = "F";
        else if (grade < 70)
            lettergrade = "D";
        else if (grade < 80)
            lettergrade = "C";
        else if (grade < 90)
            lettergrade = "B";
        else if (grade < 100)
            lettergrade = "A";
        else
            lettergrade = "A++";
    }
    else {
        std::cerr << "成绩输入有误！" << endl;
        return -1;
    }
    cout << lettergrade << endl;

    return 0;
}
