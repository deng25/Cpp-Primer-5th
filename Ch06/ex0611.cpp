#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void reset_int(int &n)
{
    n = 0;
}

int main()
{
    int n1, n2;
    cout << "请输入两个整数：" << endl;
    cin >> n1 >> n2;
    cout << "n1: " << n1 << "\tn2: " << n2 << endl;
    reset_int(n1);
    reset_int(n2);
    cout << "reset后...\nn1: " << n1 << "\tn2: " << n2 << endl;

    return 0;
}
