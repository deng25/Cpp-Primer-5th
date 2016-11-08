#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item item1, item2;
    int n = 1;
    std::cout << "请输入多个销售记录（按Ctrl + Z结束输入）。" << std::endl;
    std::cout << "请输入销售记录：" << std::endl;
    if (std::cin >> item1) {
        while (std::cin >> item2) {
            if (item1.isbn() == item2.isbn()) { // ISBN相同
                ++n;
            }
            else {
                std::cout << item1.isbn() << "一共有" << n << "条销售记录。" << std::endl;
                item1 = item2;
                n = 1;
            }
        }
        std::cout << item1.isbn() << "一共有" << n << "条销售记录。" << std::endl;
    }

    return 0;
}
