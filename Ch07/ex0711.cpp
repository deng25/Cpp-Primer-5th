#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
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

    // 构造函数
    Sales_data() = default;
    Sales_data(const string &s) : bookNo(s) { }
    Sales_data(const string &s, unsigned n, double p) : bookNo(s), units_sold(n), revenue(n * p) { }
    Sales_data(istream &i);
};

istream & read(istream & is, Sales_data & item);

Sales_data::Sales_data(istream & i)
{
    read(i, *this);
}

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
    Sales_data book1;
    Sales_data book2("0-108-X");
    Sales_data book3("0-233-X", 5, 22);
    Sales_data book4(cin);

    cout << "Book 1: ";
    print(cout, book1) << endl;

    cout << "Book 2: ";
    print(cout, book2) << endl;

    cout << "Book 3: ";
    print(cout, book3) << endl;

    cout << "Book 4: ";
    print(cout, book4) << endl;

    return 0;
}