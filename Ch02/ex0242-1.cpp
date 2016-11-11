#include <iostream>
#include "Sales_data.h"

int main()
{
    Sales_data item;
    double price = 0;
    std::cout << "请输入销售记录（按Ctrl + Z结束输入）：" << std::endl;
    while (std::cin >> item.bookNo >> item.units_sold >> price) {
        item.revenue = item.units_sold * price;
        std::cout << "输出：" << item.bookNo << " ";
        std::cout << item.units_sold << " ";
        std::cout << item.revenue << " ";
        std::cout << item.revenue / item.units_sold << std::endl;
    }

    return 0;
}
