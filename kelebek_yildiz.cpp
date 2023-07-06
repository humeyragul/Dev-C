//kelebek seþli
#include <stdio.h>
int main()
{
    int rows;
    printf("Enter the number of rows: \n");
    
    scanf("%d", &rows);
    
    for (int i = 1; i <= rows; i++)
    {
        int empty_space = 2 * rows - 2 * i;
        
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        
        for (int j = 1; j <= empty_space; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
  
    for (int i = rows; i >= 1; i--)
    {
        int empty_space = 2 * rows - 2 * i;
   
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        for (int j = 1; j <= empty_space; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}


