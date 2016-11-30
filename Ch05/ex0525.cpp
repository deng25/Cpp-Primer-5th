#include <iostream>
#include <exception>
using std::cin;
using std::cout;
using std::endl;
using std::exception;

int main()
{
    int n1, n2;
    cout << "请输入两个整数：" << endl;
    while (cin >> n1 >> n2) {
        try {
            if (!n2) {
                throw exception("被除数不能是0！");
            }
            // throw之后，下面这一条语句不会被执行
            cout << n1 << '/' << n2 << '=' << n1 / n2 << endl;
        }
        catch (exception err) {
            cout << err.what() << endl;
            cout << "再试一次？(Y/N)";
            char yn;
            cin >> yn;
            if (!cin || yn == 'n' || yn == 'N') {
                break;
            }
        }
        cout << "请输入两个整数：" << endl;
    }

    return 0;
}
