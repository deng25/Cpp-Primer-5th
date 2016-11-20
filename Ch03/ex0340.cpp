#include <iostream>
#include <cstring>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    char cstr1[] = "Lock her";
    char cstr2[] = "up";
    char cstr3[sizeof(cstr1) / sizeof(cstr1[0]) + sizeof(cstr2) / sizeof(cstr2[0])];

    strcpy(cstr3, cstr1);
    strcat(cstr3, " ");
    strcat(cstr3, cstr2);

    cout << cstr3 << endl;

    return 0;
}
