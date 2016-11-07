#include <iostream>

int main()
{
    int sum = 0, val = 0;    
    std::cout << "请输入一组整数（按Ctrl + Z结束输入）：" << std::endl;
    while (std::cin >> val) {
        sum += val;        
    }
    std::cout << "这些整数的和为" << sum << std::endl;

    return 0;
}
