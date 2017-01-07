#include <string>

class Screen {
public:
    Screen() = default;
    Screen(unsigned wd, unsigned ht) : width(wd), height(wd), contents(wd * ht, ' ') { }
    Screen(unsigned wd, unsigned ht, char ch) : width(wd), height(ht), contents(wd * ht, ch) { }

private:
    unsigned width  = 0;    // 屏幕的宽
    unsigned height = 0;    // 屏幕的高
    unsigned cursor = 0;    // 光标的当前位置
    std::string contents;   // 屏幕内容
};