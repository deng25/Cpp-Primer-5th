#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    constexpr size_t row = 3, col = 4;
    int ia[row][col] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };

    cout << "版本1：范围for" << endl;
    for (auto &i : ia) {
        for (auto j : i) {
            cout << j << ' ';
        }
        cout << endl;
    }

    cout << endl << "版本2：普通for，用下标" << endl;
    for (auto i = 0; i < row; ++i) {
        for (auto j = 0; j < col; ++j) {
            cout << ia[i][j] << ' ';
        }
        cout << endl;
    }

    cout << endl << "版本3：普通for，用指针" << endl;
    for (auto *p = ia; p < ia + row; ++p) {
        for (auto *q = *p; q < *p + col; ++q) {
            cout << *q << ' ';
        }
        cout << endl;
    }

    return 0;
}
