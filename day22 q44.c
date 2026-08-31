#include <stdio.h>

int main()
{
    int n, i;
    float sum = 0.0;
    int num = 1, den = 2;

    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        if(i == 1)
        {
            sum = sum + 1;
        }
        else
        {
            num = num + 2;
            den = den + 2;
            sum = sum + (float)num / den;
        }
    }

    printf("Approximate sum: %.1f", sum);

    return 0;
}