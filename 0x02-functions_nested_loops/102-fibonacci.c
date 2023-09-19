#include <stdio.h>

int main() 
{
    int n = 50;
    unsigned long long int fib1 = 1, fib2 = 2, nextFib;
    
    // Print the first two Fibonacci numbers
    printf("%llu, %llu, ", fib1, fib2);

    for (int i = 2; i < n; i++) {
        nextFib = fib1 + fib2;
        printf("%llu", nextFib);

        if (i < n - 1) {
            printf(", ");
        } else {
            printf("\n");
        }

        // Update Fibonacci values
        fib1 = fib2;
        fib2 = nextFib;
    }

    return 0;
}
