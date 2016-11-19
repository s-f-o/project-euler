// Problem 7: 10001st prime

#include <iostream>
#include <cmath>

bool isPrime(long x) {
    long s = sqrt(x);
    for (long i=2; i<=s; ++i) {
        if (x % i == 0)
            return false;
    }
    return true;
}

int main(void) {
    long x = 0;
    int n = 0;

    for (long i=2; n<10001; ++i) {
        if (isPrime(i)) {
            x = i;
            n += 1;
        }
    }

    std::cout << x << std::endl;
    return 0;
}

