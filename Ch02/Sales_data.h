#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>

struct Sales_data {
    std::string bookNo;     // 书籍编号
    unsigned units_sold;    // 出货量
    double revenue;         // 销售收入
};

#endif // SALES_DATA_H
