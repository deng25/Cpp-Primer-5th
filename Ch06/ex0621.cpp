#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int bigger(const int n, const int * const p)
{
//     if (n > *p) {
//         return n;
//     }
//     else {
//         return *p;
//     }
    // 此类型函数用条件运算符更好
    return (n > *p) ? n : *p;
}

int main()
{
    int n1, n2;
    cout << "请输入两个整数：" << endl;
    cin >> n1 >> n2;
    cout << "n1: " << n1 << "\tn2: " << n2 << endl;

    cout << "较大的数是" << bigger(n1, &n2) << endl;

    return 0;
}
