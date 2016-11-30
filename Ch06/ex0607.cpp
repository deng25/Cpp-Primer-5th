#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int oi()
{
    static size_t oioi = 0;
    cout << "Oi! ";
    return oioi++;
}

int main()
{
    int n;
    cout << "你想oi几次？";
    while (cin >> n) {
        for (decltype(oi()) i = 0; i < n; ++i) {
            cout << "oi()返回了" << oi() << endl;
        }
        cout << "你还想oi几次？";
    }

    return 0;
}
