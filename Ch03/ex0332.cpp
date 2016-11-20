#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    constexpr size_t sz = 10;
    int ia1[sz], ia2[sz];    
    int n = 0;
    for (auto &i : ia1) {
        i = n;
        n++;
    }

    // copy ia1 to ia2
    for (size_t i = 0; i < sz; ++i) {
        ia2[i] = ia1[i];
    }

    cout << "ia1: ";
    for (auto i : ia1) {
        cout << i << " ";
    }
    cout << endl << "ia2: ";
    for (auto i : ia2) {
        cout << i << " ";
    }
    cout << endl;

    // 利用vector重写
    vector<int> iv1(sz), iv2(sz);
    for (decltype(iv1.size()) i = 0; i < sz; ++i) {
        iv1[i] = i;
    }

    // copy iv1 to iv2
    for (decltype(iv2.size()) i = 0; i < sz; ++i) {
        iv2[i] = iv1[i];
    }

    cout << "iv1: ";
    for (auto i : iv1) {
        cout << i << " ";
    }
    cout << endl << "iv2: ";
    for (auto i : iv2) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
