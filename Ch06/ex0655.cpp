#include <vector>
using std::vector;

int f1(int a, int b)
{
    return a + b;
}

int f2(int a, int b)
{
    return a - b;
}

int f3(int a, int b)
{
    return a * b;
}

int f4(int a, int b)
{
    return a / b;
}

int main(int argc, const char *argv[])
{
    vector<int(*)(int, int)> v;
    v.push_back(f1);
    v.push_back(f2);
    v.push_back(f3);
    v.push_back(f4);

    return 0;
}