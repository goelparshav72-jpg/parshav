#include <stdio.h>

int main()
{
    int rows, cols;
    int matrix[10][10];
    int i, j;

    // Read number of rows and columns
    scanf("%d %d", &rows, &cols);

    // Read matrix elements
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print the matrix
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}