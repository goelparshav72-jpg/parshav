#include <stdio.h>

int main()
{
    char str[100];
    int length = 0;
    int palindrome = 1;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    // Find length of the string
    while (str[length] != '\0')
    {
        length++;
    }

    // Check palindrome
    for (int i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - 1 - i])
        {
            palindrome = 0;
            break;
        }
    }

    if (palindrome)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not palindrome");
    }

    return 0;
}