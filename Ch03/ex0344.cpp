#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    constexpr size_t row = 3, col = 4;
    using int_arr4 = int[col];
    int_arr4 ia[row] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };

    cout << "版本1：范围for" << endl;
    for (int_arr4 &i : ia) {
        for (int j : i) {
            cout << j << ' ';
        }
        cout << endl;
    }

    cout << endl << "版本2：普通for，用下标" << endl;
    for (size_t i = 0; i < row; ++i) {
        for (size_t j = 0; j < col; ++j) {
            cout << ia[i][j] << ' ';
        }
        cout << endl;
    }

    cout << endl << "版本3：普通for，用指针" << endl;
    for (int_arr4 *p = ia; p < ia + row; ++p) {
        for (int *q = *p; q < *p + col; ++q) {
            cout << *q << ' ';
        }
        cout << endl;
    }

    return 0;
}
