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
    string finalgrade = (grade > 90) ? "high pass"
                                    : (grade >= 60 && grade < 75) ? "low pass"
                                    : (grade < 60) ? "fail" : "pass";
    cout << finalgrade << endl;

    // use if-else
    string finalgrade2;
    if (grade < 60)
        finalgrade2 = "fail";
    else if (grade <= 75)
        finalgrade2 = "low pass";
    else if (grade > 90)
        finalgrade2 = "high pass";
    else
        finalgrade2 = "pass";
    cout << finalgrade2 << endl;

    return 0;
}
