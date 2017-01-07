#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::clog;
using std::endl;
using std::vector;

void print(const vector<int> &vi, vector<int>::size_type i)
{
    decltype(i) sz = vi.size();
#ifndef NDEBUG
    clog << "The size of the vector object in " << __FUNCTION__ << "() is " << sz << endl;
#endif // !NDEBUG
    if (!vi.empty() && i < sz) {
        cout << vi[i] << endl;
        print(vi, i + 1); // 递归
    }
}

int main(int argc, const char *argv[])
{
#ifndef NDEBUG
    clog << "This file is " << __FILE__ << endl;
#endif // !NDEBUG

    vector<int> vInt = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 10 };
    print(vInt, 0);

#ifndef NDEBUG
    clog << "Done on " << __TIME__ << " at " __DATE__ << endl;
#else
    system("PAUSE");
#endif // !NDEBUG
    return 0;
}