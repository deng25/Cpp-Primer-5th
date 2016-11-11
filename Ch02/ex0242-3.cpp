#include <iostream>
#include "Sales_data.h"

int main()
{
    Sales_data item1, item2;
    int n = 1;
    double price = 0;
    std::cout << "请输入多个销售记录（按Ctrl + Z结束输入）。" << std::endl;

    std::cout << "请输入销售记录：" << std::endl;
    if (std::cin >> item1.bookNo >> item1.units_sold >> price) {
        item1.revenue = item1.units_sold * price;
        while (std::cin >> item2.bookNo >> item2.units_sold >> price) {
            item2.revenue = item2.units_sold * price;
            if (item1.bookNo == item2.bookNo) { // ISBN相同
                ++n;
            }
            else {
                std::cout << item1.bookNo << "一共有" << n << "条销售记录。" << std::endl;
                item1.bookNo = item2.bookNo;
                item1.units_sold = item2.units_sold;
                item1.revenue = item2.revenue;
                n = 1;
            }
        }
        std::cout << item1.bookNo << "一共有" << n << "条销售记录。" << std::endl;
    }

    return 0;
}
