#include <iostream>

int main()
{
    int v1 = 0, v2 = 0;
    std::cout << "请输入两个整数：" << std::endl;
    std::cout << "整数1：";
    std::cin >> v1;
    std::cout << "整数2：";
    std::cin >> v2;
    std::cout << v1 << "和" << v2 << "之间的所有整数有：" << std::endl;
    if (v1 < v2) {
        while (v1 <= v2) {
            std::cout << v1 << " ";
            v1++;
        }
    } else {
        while (v2 <= v1) {
            std::cout << v2 << " ";
            v2++;
        }
    }
    std::cout << std::endl;

    return 0;
}
