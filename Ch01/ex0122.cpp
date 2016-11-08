#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item item, total;
    std::cout << "请输入多个ISBN相同的销售记录（按Ctrl + Z结束输入）。" << std::endl;
    std::cout << "请输入销售记录：" << std::endl;
    while (std::cin >> item) {
        total += item;
        std::cout << "请输入销售记录：" << std::endl;
    }
    
    std::cout << "它们的和为：" << std::endl << total << std::endl;

    return 0;
}
