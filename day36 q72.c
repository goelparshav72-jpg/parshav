#include <stdio.h>

int main()
{
    int rows, cols;
    int matrix[10][10];
    int i, j;
    int sum = 0;

    // Read number of rows and columns
    scanf("%d %d", &rows, &cols);

    // Read matrix elements and calculate sum
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
            sum = sum + matrix[i][j];
        }
    }

    // Print the sum
    printf("%d", sum);

    return 0;
}