#include <stdio.h>

int sum(int n)
{
    if (n == 1)     // Base Case
        return 1;

    return n + sum(n - 1);   // Recursive Call
}

int main()
{
    int n;

    printf("Enter N: ");
    scanf("%d", &n);

    printf("Sum = %d\n", sum(n));

    return 0;
}