#include <stdio.h>

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);

    int a[r][c];
    int sum = 0;

    // Input matrix
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Find sum of main diagonal
    for (int i = 0; i < r && i < c; i++)
    {
        sum = sum + a[i][i];
    }

    printf("%d", sum);

    return 0;
}