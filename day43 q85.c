#include <stdio.h>

int main()
{
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    // Find length of the string
    while (str[length] != '\0')
    {
        length++;
    }

    // Print string in reverse
    for (int i = length - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }

    return 0;
}