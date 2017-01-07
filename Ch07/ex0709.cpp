#include <iostream>
#include <string>

struct Person {
    std::string name;   // 姓名
    std::string address;// 地址

    std::string getName() const { return name; }
    std::string getAddr() const { return address; }
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

    Person ps;
    cout << "请输入他的姓名和地址：";
    read(cin, ps);
    cout << "他的姓名和地址分别是：";
    print(cout, ps);
    cout << endl;

    return 0;
}