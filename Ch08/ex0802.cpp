#include <iostream>
#include <stdexcept>

std::istream& foo(std::istream& is)
{
    int n;
    while (is >> n, !is.eof()) {
        if (is.bad()) {
            throw std::runtime_error("IO流错误");
        }

        if (is.fail()) {
            std::cerr << "数据错误，请重试：" << std::endl;
            is.clear();
            is.ignore();
            continue;
        }

        std::cout << n << std::endl;
    }
    is.clear();

    return is;
}

int main()
{
    std::cout << "请输入几个整数（按Ctrl + Z结束输入）：\n";
    foo(std::cin);

    return 0;
}
