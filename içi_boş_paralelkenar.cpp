//ÝÇÝ BOÞ  PARALEL KENAR
#include <stdio.h>

int main()
{
    int i, j, satir;

    printf("satir : ");
    scanf("%d", &satir);


    for(i=1; i<=satir; i++)
    {
        for(j=1; j<=satir-i; j++)
        {
            printf(" ");
        }

        for(j=1; j<=satir; j++)
        {
            if(i==1 || i==satir || j==1 || j==satir)
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }

    return 0;
}
