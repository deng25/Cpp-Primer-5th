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
    istream & read(istream & is, Sales_data & item);

    // 构造函数
    Sales_data() = default;
    Sales_data(const string &s) : bookNo(s) { }
    Sales_data(const string &s, unsigned n, double p) : bookNo(s), units_sold(n), revenue(n * p) { }
    Sales_data(istream &is) { read(is, *this); }
};
