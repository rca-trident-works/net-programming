#include <stdio.h>

int gcd(int, int);

int gcd(int a, int b) {
    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }

    return a;
}

int main() {
    int num;
    int num1 = 12;
    int num2 = 18;

    int result = gcd(num1, num2);

    printf("The GCD of %d and %d is %d\n", num1, num2, result);
    return 0;
}
