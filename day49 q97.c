#include <stdio.h>

int main()
{
    char str[100];

    printf("Enter your name: ");
    scanf("%[^\n]", str);

    // Print first initial
    printf("%c.", str[0]);

    // Print initials after every space
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ' && str[i + 1] != '\0')
        {
            printf("%c.", str[i + 1]);
        }
    }

    return 0;
}