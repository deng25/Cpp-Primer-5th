#include <iostream>

int main()
{
    int i = 0, &r = i;
    const int ci = i, &cr = ci;
    auto a = r;
    auto b = ci;
    auto c = cr;
    auto d = &i;
    auto e = &ci;
    const auto f = ci;
    auto &g = ci;

    a = 42;
    b = 42;
    c = 42;
    // error:
    //d = 42;
    //e = 42;
    //f = 42;
    //g = 42;

    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "c: " << c << std::endl;
    std::cout << "d: " << d << std::endl;
    std::cout << "e: " << e << std::endl;
    std::cout << "f: " << f << std::endl;
    std::cout << "g: " << g << std::endl;
    std::cout << "..\n..\ni: " << i << std::endl;
    std::cout << "r: " << r << std::endl;
    std::cout << "ci: " << ci << std::endl;
    std::cout << "cr: " << cr << std::endl;

    return 0;
}
