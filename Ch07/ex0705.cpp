#include <string>

struct Person {
    std::string name;   // 姓名
    std::string address;// 地址

    std::string getName() const { return name; }
    std::string getAddr() const { return address; }
};