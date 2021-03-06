// Problem 3: Largest prime factor

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

    long a = 600851475143;
    long s = sqrt(a);

    for (long i=s; i>0; --i) {
        if (isPrime(i)) {
            if (a%i == 0) {
                x = i;
                break;
            }
        }
    }

    std::cout << x << std::endl;
    return 0;
}

