#include <iostream>
#include <string>

struct Sales_data {
    std::string bookNo;     // 书籍编号
    unsigned units_sold;    // 出货量
    double revenue;         // 销售收入
};

int main()
{
    Sales_data item1, item2;
    double price = 0;
    std::cout << "请输入两个ISBN相同的销售记录。" << std::endl;

    std::cout << "请输入第一条销售记录：" << std::endl;
    std::cin >> item1.bookNo >> item1.units_sold >> price;
    item1.revenue = item1.units_sold * price;

    std::cout << "请输入第二条销售记录：" << std::endl;
    std::cin >> item2.bookNo >> item2.units_sold >> price;
    item2.revenue = item2.units_sold * price;

    if (item1.bookNo == item2.bookNo) {
        std::cout << "它们的和为：" << std::endl;
        std::cout << item1.bookNo << " ";
        std::cout << item1.units_sold + item2.units_sold << " ";
        std::cout << item1.revenue + item2.revenue << " ";
        std::cout << (item1.revenue + item2.revenue) / (item1.units_sold + item2.units_sold);
        std::cout << std::endl;
    }
    else {
        std::cout << "数据有误！"<< std::endl;
        return -1;
    }

    return 0;
}
