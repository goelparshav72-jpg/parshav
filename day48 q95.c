#include <stdio.h>

int main()
{
    char str1[100], str2[100], temp[200];
    int len1 = 0, len2 = 0;
    int i, j, k;
    int found = 0;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    // Find lengths
    while (str1[len1] != '\0')
        len1++;

    while (str2[len2] != '\0')
        len2++;

    if (len1 != len2)
    {
        printf("Not rotation");
        return 0;
    }

    // Make temp = str1 + str1
    for (i = 0; i < len1; i++)
        temp[i] = str1[i];

    for (i = 0; i < len1; i++)
        temp[len1 + i] = str1[i];

    temp[2 * len1] = '\0';

    // Check if str2 is present in temp
    for (i = 0; temp[i] != '\0'; i++)
    {
        j = i;
        k = 0;

        while (temp[j] == str2[k] && str2[k] != '\0')
        {
            j++;
            k++;
        }

        if (str2[k] == '\0')
        {
            found = 1;
            break;
        }
    }

    if (found)
        printf("Rotation");
    else
        printf("Not rotation");

    return 0;
}s