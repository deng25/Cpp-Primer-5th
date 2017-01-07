#include <vector>
using std::vector;

int f(int, int);

int main(int argc, const char *argv[])
{
    vector<int(*)(int, int)> v1;
    vector<decltype(f)*> v2; // 简化，同上等价

    return 0;
}