#include <stdio.h>
#include <string.h>

void reverse(char str[], int index)
{
    if (index < 0)      // Base Case
        return;

    printf("%c", str[index]);
    reverse(str, index - 1);   // Recursive Call
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    printf("Reverse String: ");
    reverse(str, strlen(str) - 1);

    return 0;
}