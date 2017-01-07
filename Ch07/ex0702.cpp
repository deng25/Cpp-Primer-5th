#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

struct Sales_data {
    string bookNo;      // 书籍编号
    unsigned units_sold;// 出货量
    double revenue;     // 销售收入

    std::string isbn() const { return bookNo; };
    Sales_data & combine(const Sales_data &rhs);
};

Sales_data & Sales_data::combine(const Sales_data & rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

int main(int argc, const char *argv[])
{
    Sales_data total, trans;
    int cnt = 1;

    cout << "请输入多个销售记录（按Ctrl + Z结束输入）。" << endl;
    cout << "请输入销售记录：" << endl;
    if (cin >> total.bookNo >> total.units_sold >> total.revenue) {
        while (cin >> trans.bookNo >> trans.units_sold >> trans.revenue) {
            if (total.isbn() == trans.isbn()) {
                ++cnt;
            }
            else {
                cout << total.isbn() << "一共有" << cnt << "条销售记录。" << endl;
                total = trans;
                cnt = 1;
            }
        }
        std::cout << total.isbn() << "一共有" << cnt << "条销售记录。" << endl;
    }

    return 0;
}