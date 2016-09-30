// Problem 2: Even Fibonacci numbers

#include <iostream>

int main(void) {
    int x = 0;
    int a = 1;
    int b = 1;
    int c = a+b;
    while (c <= 4000000) {
        if (c % 2 == 0)
            x += c;
        a = b;
        b = c;
        c = a+b;
    };

    std::cout << x << std::endl;
    return 0;
}
