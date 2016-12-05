#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

string(&refArrStr( ))[10];

// 再写三个声明
// 一、使用类型别名
typedef string arrS[10];
arrS& arrStr1( );
// 二、使用尾置返回类型
auto arrStr2( )->string(&)[10];
// 三、使用decltype
string arrStr[10];
decltype(arrStr) &arrStr3( );

int main(int argc, const char *argv[])
{
    return 0;
}