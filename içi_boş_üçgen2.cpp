//ters içi boþ üçgen
#include <stdio.h>

int main()
{
    int i, j, satir;

    /* Input rows from user */
    printf("Enter number of rows : ");
    scanf("%d", &satir);

    for(i=1; i<=satir; i++)
    {
        for(j=i; j<satir; j++)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            if(i==satir || j==1 || j==i)
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
