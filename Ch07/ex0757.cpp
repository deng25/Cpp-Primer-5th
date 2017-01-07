#include <string>

class Account {
public:
    static double rate() { return rateOfInterest; }

private:
    std::string name;
    double amount;
    static double rateOfInterest;
};