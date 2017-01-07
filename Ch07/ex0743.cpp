#include <iostream>
using std::cout;
using std::endl;

class NoDefault {
public:
    NoDefault(int i) : n(i) { }
    int get() const { return n; }
private:
    int n;
};

class C {
public:
    C(int i = 0) : nd(i) { }
    int get() const { return nd.get(); }

private:
    NoDefault nd;
};

int main()
{
    C c(66);
    cout << c.get() << endl;

    return 0;
}