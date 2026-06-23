#include <stdio.h>
#include <string.h>

int palindrome(char str[], int start, int end)
{
    if (start >= end)   // Base Case
        return 1;

    if (str[start] != str[end])
        return 0;

    return palindrome(str, start + 1, end - 1); // Recursive Call
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    if (palindrome(str, 0, strlen(str) - 1))
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}