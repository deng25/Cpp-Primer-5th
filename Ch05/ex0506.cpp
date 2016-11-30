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
    (grade >= 0 && grade <= 100) ?
         (grade < 60) ?
            (lettergrade = "F")
        : (grade < 70) ?
            (lettergrade = "D")
        : (grade < 80) ?
            (lettergrade = "C")
        : (grade < 90) ?
            (lettergrade = "B")
        : (grade < 100) ?
            (lettergrade = "A")
        :
            (lettergrade = "A++")    
    : lettergrade = "成绩输入有误！";

    cout << lettergrade << endl;

    return 0;
}
