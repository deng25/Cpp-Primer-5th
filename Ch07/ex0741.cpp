#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::istream;
using std::ostream;
using std::string;

class Sales_data {
    friend Sales_data add(const Sales_data &, const Sales_data&);
    friend istream & read(istream &, Sales_data&);
    friend ostream & print(ostream &, const Sales_data &);

private:
    string bookNo;
    unsigned units_sold = 0;
    double renueve = 0.0;

public:
    string isbn() const { return bookNo; }
    double avg_price() const;
    Sales_data & combine(const Sales_data&);

public:
    // 非委托
    Sales_data(const string & s, unsigned n, double p) : bookNo(s), units_sold(n), renueve(n * p) { cout << "运行了非委托构造函数。" << endl; }
    // 余下三个构造函数都委托给上面的非委托构造函数
    Sales_data() : Sales_data("", 0, 0) { cout << "运行了Sales_data()（委托给非委托构造函数）。" << endl; }
    Sales_data(const string & s) : Sales_data(s, 0, 0) { cout << "运行了Sales_data(const string &s)（委托给非委托构造函数）。" << endl; }
    Sales_data(istream& is) : Sales_data() { cout << "运行了Sales_data(istream &is)（委托给非委托构造函数）。" << endl; read(is, *this); };
};

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
    item.renueve = item.units_sold * price;

    return is;
}

ostream & print(ostream & os, const Sales_data & item)
{
    os << item.isbn() << ' ' << item.units_sold << ' ' << item.renueve << ' ' << item.avg_price();

    return os;
}

inline double Sales_data::avg_price() const
{
    return units_sold ? renueve / units_sold : 0;
}

Sales_data & Sales_data::combine(const Sales_data &rhs)
{
    units_sold += rhs.units_sold;
    renueve += rhs.renueve;

    return *this;
}

// Sales_data::Sales_data(istream & is)
// {
//     read(is, *this);
// }

int main()
{
    cout << "Book 1：" << endl;
    Sales_data book1;
    cout << "输出其data内容：";
    print(cout, book1) << endl;

    cout << "Book 2：" << endl;
    Sales_data book2("0-108-X");
    cout << "输出其data内容：";
    print(cout, book2) << endl;

    cout << "Book 3：" << endl;
    Sales_data book3("0-233-X", 5, 22);
    cout << "输出其data内容：";
    print(cout, book3) << endl;

    cout << "Book 4：" << endl;
    Sales_data book4(cin);
    cout << "输出其data内容：";
    print(cout, book4) << endl;

    return 0;
}