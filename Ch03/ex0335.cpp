#include <iostream>
#include <iterator>
using std::cin;
using std::cout;
using std::endl;
using std::begin;
using std::end;

int main()
{
    constexpr size_t sz = 10;
    int ia[sz];

    for (int *pb = begin(ia), *pe = end(ia), i = 10; pb != pe; ++pb) {
        *pb = i;
        --i;
    }

    for (auto i : ia) {
        cout << i << " ";
    }
    cout << endl;

    // 将数组中元素置为0
    const auto pe = ia + sz;
    for (auto p = ia; p < pe; ++p) {
        *p = 0;
    }

    for (auto p = ia; p < pe; ++p) {
        cout << *p << " ";
    }
    cout << endl;

    return 0;
}
