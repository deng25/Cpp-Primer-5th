#include <iostream>
#include <iterator>
using std::cin;
using std::cout;
using std::endl;
using std::begin;
using std::end;

void print(const int n)
{
    cout << n << endl;
}

void print(const int *b, const int *e)
{
    while (b != e) {
        cout << *b++ << ' ';
    }
    cout << endl;
}

int main()
{
    int i = 0, j[2] = { 0, 1 };
    print(i);
    print(begin(j), end(j));

    return 0;
}