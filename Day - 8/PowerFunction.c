#include <stdio.h>

long long power(int a, int b)
{
    if (b == 0)     // Base Case
        return 1;

    return a * power(a, b - 1);   // Recursive Call
}

int main()
{
    int a, b;

    printf("Enter base and exponent: ");
    scanf("%d%d", &a, &b);

    printf("Result = %lld\n", power(a, b));

    return 0;
}