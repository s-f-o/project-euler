// Problem 9: Special Pythagorean triplet

#include <iostream>

int main(void) {
    int x = 0;

    for (int a=1; a<500; ++a) {
        for (int b=a; b < 1000; ++b) {
            int c = 1000 - a - b;
            if (c*c == a*a + b*b) {
                std::cout << (a*b*c) << std::endl;
                return 0;
            }
        }
    }

    std::cout << "no solution" << std::endl;
    return 0;
}

