#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    constexpr size_t sz = 10;
    int ia[sz];
    int n = 0;
    for (auto &i : ia) {
        i = n;
        n++;
    }

    for (auto i : ia) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
