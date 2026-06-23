#include <stdio.h>

int fibonacci(int n)
{
    if (n == 0)     // Base Case
        return 0;
    if (n == 1)     // Base Case
        return 1;

    return fibonacci(n - 1) + fibonacci(n - 2); // Recursive Calls
}

int main()
{
    int n, i;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for(i = 0; i < n; i++)
        printf("%d ", fibonacci(i));

    return 0;
}