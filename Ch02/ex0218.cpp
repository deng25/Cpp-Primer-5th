#include <iostream>

int main()
{
    int n1 = 42, n2 = 66;
    int *p = &n1;

    // 更改指针的值
    p = &n2;
    std::cout << "*p: " << *p << std::endl;

    // 更改指针所指对象的值
    *p = 81;
    std::cout << "n2: " << n2 << std::endl;

    return 0;
}
