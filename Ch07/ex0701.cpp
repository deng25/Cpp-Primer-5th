#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

struct Sales_data {
    string ISBN;        // 书籍编号
    unsigned units_sold;// 出货量
    double revenue;     // 销售收入
};

int main(int argc, const char *argv[])
{
    Sales_data item1, item2;
    int cnt = 1;

    cout << "请输入多个销售记录（按Ctrl + Z结束输入）。" << endl;
    cout << "请输入销售记录：" << endl;
    if (cin >> item1.ISBN >> item1.units_sold >> item1.revenue) {
        while (cin >> item2.ISBN >> item2.units_sold >> item2.revenue) {
            if (item1.ISBN == item2.ISBN) {
                ++cnt;
            }
            else {
                cout << item1.ISBN << "一共有" << cnt << "条销售记录。" << endl;
                item1 = item2;
                cnt = 1;
            }
        }
        std::cout << item1.ISBN << "一共有" << cnt << "条销售记录。" << endl;
    }

    return 0;
}
