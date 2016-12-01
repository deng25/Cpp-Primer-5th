#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void swap_ptr(int * &p1, int * &p2)
{
    auto temp = p1;
    p1 = p2;
    p2 = temp;
}

int main()
{
    int n1 = 8;
    int n2 = 6;
    int * p1 = &n1;
    int * p2 = &n2;

    cout << "p1: " << p1 << "\t*p1: " << *p1 << endl;
    cout << "p2: " << p2 << "\t*p2: " << *p2 << endl;
    swap_ptr(p1, p2);
    cout << "交换后..." << endl;
    cout << "p1: " << p1 << "\t*p1: " << *p1 << endl;
    cout << "p2: " << p2 << "\t*p2: " << *p2 << endl;

    return 0;
}
