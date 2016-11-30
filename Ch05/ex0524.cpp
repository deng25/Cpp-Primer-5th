#include <iostream>
#include <exception>
using std::cin;
using std::cout;
using std::endl;
using std::exception;

int main()
{
    int n1, n2;
    try {
        cout << "请输入两个整数：" << endl;
        cin >> n1 >> n2;

        if (!n2) {
            throw exception("被除数不能是0！");
        }
    }
    catch (exception err) {
        cout << err.what() << endl;
    }

    cout << n1 << '/' << n2 << '=' << n1 / n2 << endl;

    return 0;
}
