#include <string>

class Screen {
private:
    unsigned width  = 0;    // 屏幕的宽
    unsigned height = 0;    // 屏幕的高
    unsigned cursor = 0;    // 光标的当前位置
    std::string contents;   // 屏幕内容
};