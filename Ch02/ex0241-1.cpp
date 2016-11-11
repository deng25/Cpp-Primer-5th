#include <iostream>
#include <string>

struct Sales_data {
    std::string bookNo;     // 书籍编号
    unsigned units_sold;    // 出货量
    double revenue;         // 销售收入
};

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
