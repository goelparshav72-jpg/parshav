#include <stdio.h>

int main()
{
    char str[100];
    int count[26] = {0};

    printf("Enter a string: ");
    scanf("%s", str);

    // Count frequency of each lowercase letter
    for (int i = 0; str[i] != '\0'; i++)
    {
        count[str[i] - 'a']++;
    }

    // Find first repeating character
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (count[str[i] - 'a'] > 1)
        {
            printf("%c", str[i]);
            break;
        }
    }

    return 0;
}