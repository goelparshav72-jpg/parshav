#include <stdio.h>

int main()
{
    int n, x;
    int arr[100];
    int index = -1;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter x: ");
    scanf("%d", &x);

    for(int i = 0; i < n; i++)
    {
        if(arr[i] >= x)
        {
            index = i;
            break;
        }
    }

    printf("%d", index);

    return 0;
}