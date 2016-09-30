// Problem X: 

#include <iostream>
#include <stdio.h>

bool isPalindrome(int c) {
    char number[10] = {0};
    int n = snprintf(number, 10, "%d", c);
    for (int i=0; i<n/2; ++i) {
        if (number[i] != number [(n-1-i)]) {
            return false;
        }
    }
    return true;
}

int main(void) {
    int x = 0;

    for (int a = 999; a > 99; --a) {
        for (int b = 999; b > 99; --b) {
            int c = a*b;
            if (isPalindrome(c) && c > x) {
                x = c;
            }
        }
    }    

    std::cout << x << std::endl;
    return 0;
}

