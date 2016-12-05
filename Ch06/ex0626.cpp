#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(int argc, const char* argv[])
{
    if (argc) {
        string str;
        for (decltype(argc) i = 0; i != argc; ++i) {
            cout << "argv[" << i << "] = " << argv[i] << endl;
        }
    }

    return 0;
}