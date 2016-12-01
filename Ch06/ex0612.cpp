#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void my_swap(int & a, int & b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int n1, n2;
    cout << "请输入两个整数：" << endl;
    cin >> n1 >> n2;
    cout << "n1: " << n1 << "\tn2: " << n2 << endl;
    my_swap(n1, n2);
    cout << "交换后...\nn1: " << n1 << "\tn2: " << n2 << endl;
    
    return 0;
}
