#include <stdio.h>

int main()
{
    int n;
    int arr[100];
    int count, majority = -1;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++)
    {
        count = 0;

        for(int j = 0; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
            }
        }

        if(count > n / 2)
        {
            majority = arr[i];
            break;
        }
    }

    printf("%d", majority);

    return 0;
}