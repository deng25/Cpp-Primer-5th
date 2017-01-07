#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::cerr;
using std::string;
using std::istream;
using std::ostream;

struct Sales_data {
    string bookNo;          // 书籍编号
    unsigned units_sold = 0;// 出货量
    double revenue = 0.0;   // 销售收入

    std::string isbn() const { return bookNo; };
    Sales_data & combine(const Sales_data &rhs);
    double avg_price() const { return (!units_sold ? 0 : revenue / units_sold); }; // 不能除以0
    istream & read(istream & is, Sales_data & item);

    // 构造函数
    Sales_data() = default;
    Sales_data(const string &s) : bookNo(s) { }
    Sales_data(const string &s, unsigned n, double p) : bookNo(s), units_sold(n), revenue(n * p) { }
    Sales_data(istream &is) { read(is, *this); }
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

istream & Sales_data::read(istream & is, Sales_data & item)
{
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = item.units_sold * price;

    return is;
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
    Sales_data total(cin);

    if (cin) {
        Sales_data trans(cin);
        do {
            if (total.isbn() == trans.isbn()) {
                total = add(total, trans);
            }
            else {
                print(cout, total) << endl;
                total = trans;
            }
        } while (read(cin, trans));
        print(cout, total) << endl;
    }
    else {
        cerr << "No data?!" << endl;
        return -1;
    }

    return 0;
}