#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(int argc, const char *argv[])
{
    if (argc) {
        string str;
        for (decltype(argc) i = 0; i != argc; ++i) {
            str = str + argv[i] + ' ';
        }
        cout << "argv = " << str << endl;
    }

    return 0;
}