#include "Chapter6.h"

long long factorial(unsigned n)
{
    if (!n) {
        return 1;
    }
    long long result = 1;
    for (int i = n; i > 0; --i) {
        result *= i;
    }
    return result;
}
