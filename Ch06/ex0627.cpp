#include <iostream>
#include <initializer_list>
using std::cin;
using std::cout;
using std::endl;
using std::initializer_list;

int sums(initializer_list<int> il)
{
    int sum = 0;
    for (auto i : il) {
        sum += i;
    }

    return sum;
}

int main(int argc, const char* argv[])
{
    // 需要放在一对花括号内
    cout << sums({ 6 }) << endl;
    cout << sums({ 1, 2, 3, 4, 5, 6, 7, 8, 9 }) << endl;;

    return 0;
}