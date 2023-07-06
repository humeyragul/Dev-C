#include <stdio.h>

int main()
{
    int i, j, satir;

    printf("Enter number of rows: ");
    scanf("%d", &satir);

    for(i=1; i<=satir; i++)
    {
        for(j=1; j<=i; j++)
        { 
            if(j==1 || j==i || i==satir)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}
