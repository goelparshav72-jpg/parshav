#include <stdio.h>
#include <math.h>

int main()
{
    int n, first, last, digits, middle, result;

    scanf("%d", &n);

    last = n % 10;

    digits = 0;
    int temp = n;
    while(temp > 0)
    {
        digits++;
        temp = temp / 10;
    }

    first = n / (int)pow(10, digits - 1);

    middle = (n % (int)pow(10, digits - 1)) / 10;

    result = last * (int)pow(10, digits - 1) + middle * 10 + first;

    printf("%d", result);

    return 0;
}