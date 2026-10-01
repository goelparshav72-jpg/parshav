#include <stdio.h>

int main()
{
    int n;
    int arr[100];
    int totalSum = 0, leftSum = 0;
    int pivot = -1;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        totalSum += arr[i];
    }

    for(int i = 0; i < n; i++)
    {
        totalSum = totalSum - arr[i];   // Right sum

        if(leftSum == totalSum)
        {
            pivot = i;
            break;
        }

        leftSum = leftSum + arr[i];
    }

    printf("%d", pivot);

    return 0;
}