// Problem 6: Sum square difference

#include <iostream>

int main(void) {
    int x = 0;

    int sum = 0;
    int square = 0;
    for (int i=100; i > 0; --i) {
        sum += i;
        square += i*i;
    }
    sum *= sum;
    x = sum - square;

    std::cout << x << std::endl;
    return 0;
}

