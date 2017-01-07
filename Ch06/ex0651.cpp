#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void f()
{
    cout << "f()" << endl;
}

void f(int n)
{
    cout << "f(int)" << endl;
}

void f(int n1, int n2)
{
    cout << "f(int, int)" << endl;
}

void f(double d1, double d2 = 3.14)
{
    cout << "f(double, double = 3.14)" << endl;
}

int main(int argc, const char *argv[])
{
    f(2.56, 42); // 编译不通过：调用二义性
    f(42);
    f(42, 0);
    f(2.56, 3.14);

    return 0;
}