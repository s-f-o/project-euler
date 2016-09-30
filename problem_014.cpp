// Problem 14: Longest Collatz sequence

#include <iostream>

int main(void) {
    long x = 0;
    long l = 0;

    for (long i = 1000000; i>0; --i) {
        long c = i;
        long j = 1;
        while (c > 1) {
            j+=1;
            c = (c & 0x1) ? (3*c+1) : (c >> 1);
        }
        if (j > l) {
            x = i;
            l = j;
        }
    }

    std::cout << x << std::endl;
    return 0;
}

