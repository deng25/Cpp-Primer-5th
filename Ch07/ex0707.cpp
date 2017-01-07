#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::istream;
using std::ostream;

struct Sales_data {
    string bookNo;      // 书籍编号
    unsigned units_sold;// 出货量
    double revenue;     // 销售收入

    std::string isbn() const { return bookNo; };
    Sales_data & combine(const Sales_data &rhs);
    double avg_price() const { return revenue / units_sold; };
};

Sales_data & Sales_data::combine(const Sales_data & rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;

    return *this;
}

Sales_data add(const Sales_data & lhs, const Sales_data & rhs)
{
    Sales_data sum = lhs;
    sum.combine(rhs);

    return sum;
}

istream & read(istream & is, Sales_data & item)
{
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = item.units_sold * price;

    return is;
}

ostream & print(ostream & os, const Sales_data & item)
{
    os << item.isbn() << ' ' << item.units_sold << ' ' << item.revenue << ' ' << item.avg_price();

    return os;
}

int main(int argc, const char *argv[])
{
    Sales_data total, trans;
    int cnt = 1;

    cout << "请输入多个销售记录（按Ctrl + Z结束输入）。" << endl;
    cout << "请输入销售记录：" << endl;
    if (read(cin, total)) {
        while (read(cin, trans)) {
            if (total.isbn() == trans.isbn()) {
                total = add(total, trans);
                ++cnt;
            }
            else {
                cout << total.isbn() << "一共有" << cnt << "条销售记录。" << endl;
                print(cout, total);
                total = trans;
                cnt = 1;
            }
        }
        std::cout << total.isbn() << "一共有" << cnt << "条销售记录。" << endl;
        print(cout, total);
    }

    return 0;
}