#include <iostream>
#include <string>

struct Person {
    std::string name;   // 姓名
    std::string address;// 地址

    std::string getName() const { return name; }
    std::string getAddr() const { return address; }

    // 构造函数
    Person() = default;
    Person(const std::string &s) : name(s) { }
    Person(const std::string &s1, const std::string &s2) : name(s1), address(s2) { }
};

std::istream & read(std::istream & is, Person & person)
{
    is >> person.name;
    is.clear();
    is.ignore();
    std::getline(is, person.address);

    return is;
}

std::ostream & print(std::ostream & os, const Person & person)
{
    os << person.getName() << '\t' << person.getAddr();

    return os;
}

int main()
{
    using namespace std;

    Person p1;
    Person p2("Jack");
    Person p3("Tom", "Room 505 Qinzhou Building, NO.6, Lane 108, Qinzhou Road, Xuhui District, Shanghai");
    print(cout, p1) << endl;
    print(cout, p2) << endl;
    print(cout, p3) << endl;

    return 0;
}