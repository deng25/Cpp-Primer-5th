#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

void print(const vector<int> &vi, vector<int>::size_type i)
{
    decltype(i) sz = vi.size();
    if (!vi.empty() && i < sz) {
        cout << vi[i] << endl;
        print(vi, i + 1); // 递归
    }
}

int main(int argc, const char *argv[])
{
    vector<int> vInt = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 10 };
    print(vInt, 0);

    return 0;
}