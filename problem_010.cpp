// Problem 10: Summation of primes

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

    for (long i=2; i<2000000; ++i) {
        if (isPrime(i)) {
            x += i;
        }
    }

    std::cout << x << std::endl;
    return 0;
}

