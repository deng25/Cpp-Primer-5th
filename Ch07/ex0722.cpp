#include <iostream>
#include <string>

class Person {
    friend std::istream & read(std::istream & is, Person & person);
    friend std::ostream & print(std::ostream & os, const Person & person);

public:
    Person() = default;
    Person(const std::string &s) : name(s) { }
    Person(const std::string &s1, const std::string &s2) : name(s1), address(s2) { }
    Person(std::istream &is);

public:
    std::string getName() const { return name; }
    std::string getAddr() const { return address; }

private:
    std::string name;   // 姓名
    std::string address;// 地址
};

Person::Person(std::istream & is)
{
    read(is, *this);
}

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
    Person p4(cin);

    print(cout, p1) << endl;
    print(cout, p2) << endl;
    print(cout, p3) << endl;
    print(cout, p4) << endl;

    return 0;
}