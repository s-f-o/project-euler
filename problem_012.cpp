// Problem 12: Highly divisible triangular number

#include <iostream>
#include <stdint.h>

int countDivisors(uint64_t x) {
    int n = 0;
    for (int i=1; i<=x; ++i) {
        if (x % i == 0)
            n += 1;
    }
    return n;
}

int main(void) {
    uint64_t x = 0;
    uint64_t i = 0;

    std::cout << x-1 << " - " << countDivisors(x-1) << std::endl;
    for (x=0, i=0; countDivisors(x-1) < 500; x+=i, ++i);

    std::cout << x << std::endl;
    return 0;
}

