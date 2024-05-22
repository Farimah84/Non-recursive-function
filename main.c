#include <stdio.h>
#include <stdlib.h>

long long power(int a, int b) {
    long long result = 1;
    while (b > 0) {
        if (b & 1) {
            result =  result * a;
        }
        a = a * a;
        b >>= 1;
    }
    return result;
}

int main() {
    int a, b;
    printf("Enter base (a): ");
    scanf("%d", &a);
    printf("Enter exponent (b): ");
    scanf("%d", &b);

    long long result = power(a, b);

    printf("%d to the power of %d is: %lld\n", a, b, result);

    return 0;
}
