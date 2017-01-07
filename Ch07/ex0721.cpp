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
    Sales_data() = default;
    Sales_data(const string & s) : bookNo(s) { }
    Sales_data(const string & s, unsigned n, double p) : bookNo(s), units_sold(n), renueve(n * p) { }
    Sales_data(istream&);
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

double Sales_data::avg_price() const
{
    return units_sold ? renueve / units_sold : 0;
}

Sales_data & Sales_data::combine(const Sales_data &rhs)
{
    units_sold += rhs.units_sold;
    renueve += rhs.renueve;

    return *this;
}

Sales_data::Sales_data(istream & is)
{
    read(is, *this);
}

int main()
{
    Sales_data item1(cin);
    print(cout, item1) << endl;

    return 0;
}