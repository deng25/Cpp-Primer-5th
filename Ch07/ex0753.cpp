class Debug {
public:
    constexpr Debug(bool b = true) : _hw(b), _io(b), _other(b) { }
    constexpr Debug(bool hw, bool io, bool other) : _hw(hw), _io(io), _other(other) { }

public:
    constexpr bool Any() { return _hw || _io || _other; } // 只要出现任何一种错误
    void set_hw(bool b) { _hw = b; }
    void set_io(bool b) { _io = b; }
    void set_other(bool b) { _other = b; }

private:
    bool _hw;    // 硬件错误
    bool _io;    // IO错误
    bool _other; // 其他错误
};