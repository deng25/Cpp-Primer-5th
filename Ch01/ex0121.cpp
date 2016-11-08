#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item item1, item2;
    std::cout << "请输入两个ISBN相同的销售记录。" << std::endl;
    std::cout << "请输入第一条销售记录：" << std::endl;
    std::cin >> item1;
    std::cout << "请输入第二条销售记录：" << std::endl;
    std::cin >> item2;
    std::cout << "它们的和为：" << std::endl << item1 + item2 << std::endl;

    return 0;
}
