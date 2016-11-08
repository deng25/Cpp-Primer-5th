#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item item;
    std::cout << "请输入销售记录（按Ctrl + Z结束输入）：" << std::endl;
    while (std::cin >> item) {
        std::cout << "输出：" << item << std::endl;
    }

    return 0;
}
