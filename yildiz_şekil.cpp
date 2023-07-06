#include <stdio.h>
int main()
{
    int i, j, column;
    printf("Enter the number of columns: \n");
    
    // taking input for number of rows
    scanf("%d", &column);
    
    // Outer loop to handle number of rows
    for (i = 1; i <= 3; i++)
    {
        // Inner loop to handle number of columns
        for (j = 1; j <= column; j++)
        {
            if (((i + j) % 4 == 0) || (i == 2) && j % 4 == 0)
            {
                // Printing stars
                printf("*");
            }
            else
            {
                // Printing spaces
                printf(" ");
            }
        }
        // Ending line after each row
        printf("\n");
    }
    return 0;
}


