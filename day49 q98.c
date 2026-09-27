#include <stdio.h>

int main()
{
    char str[100];
    int lastSpace = -1;

    printf("Enter your name: ");
    scanf("%[^\n]", str);

    // Print first initial
    printf("%c.", str[0]);

    // Find initials and last space
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            lastSpace = i;

            if (str[i + 1] != '\0')
            {
                printf("%c.", str[i + 1]);
            }
        }
    }

    // Print surname
    if (lastSpace != -1)
    {
        printf(" ");
        for (int i = lastSpace + 1; str[i] != '\0'; i++)
        {
            printf("%c", str[i]);
        }
    }

    return 0;
}