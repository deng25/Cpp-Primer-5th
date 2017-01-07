#include <iostream>
#include <string>

class Screen {
    friend class Window_mgr;
public:
    Screen& move(unsigned r, unsigned c);
    Screen& set(char ch);
    Screen& set(unsigned r, unsigned c, char ch);
    Screen& display(std::ostream &os);
    const Screen& display(std::ostream &os) const;

public:
    Screen() = default;
    Screen(unsigned wd, unsigned ht) : width(wd), height(wd), contents(wd * ht, ' ') { }
    Screen(unsigned wd, unsigned ht, char ch) : width(wd), height(ht), contents(wd * ht, ch) { }

private:
    void _display(std::ostream &os) const { os << contents; }

private:
    unsigned width = 0;    // 屏幕的宽
    unsigned height = 0;    // 屏幕的高
    unsigned cursor = 0;    // 光标的当前位置
    std::string contents;   // 屏幕内容
};

inline Screen& Screen::move(unsigned r, unsigned c)
{
    unsigned row = r * width;
    cursor = row + c;

    return *this;
}

inline Screen& Screen::set(char ch)
{
    contents[cursor] = ch;

    return *this;
}

inline Screen& Screen::set(unsigned r, unsigned c, char ch)
{
    contents[r * width + c] = ch;

    return *this;
}

inline Screen& Screen::display(std::ostream &os)
{
    _display(os);
    return *this;
}

inline const Screen& Screen::display(std::ostream &os) const
{
    _display(os);
    return *this;
}

int main()
{
    using namespace std;

    Screen myScreen(5, 5, 'X');
    myScreen.move(4, 0).set('#').display(cout);
    cout << "\n";
    myScreen.display(cout);
    cout << "\n";

    return 0;
}