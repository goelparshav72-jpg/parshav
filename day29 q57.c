#include <stdio.h>

int main()
{
    int n, i;
    int arr[100];
    int sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    printf("%d", sum);

    return 0;
}