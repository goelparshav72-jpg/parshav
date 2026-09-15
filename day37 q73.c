#include <stdio.h>

int main()
{
    int rows, cols;
    int matrix[100][100];
    int sum[100];
    int i, j;

    // Input number of rows and columns
    scanf("%d %d", &rows, &cols);

    // Input matrix elements
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Find sum of each row
    for(i = 0; i < rows; i++)
    {
        sum[i] = 0;
        for(j = 0; j < cols; j++)
        {
            sum[i] = sum[i] + matrix[i][j];
        }
    }

    // Print the sums
    for(i = 0; i < rows; i++)
    {
        printf("%d ", sum[i]);
    }

    return 0;
}