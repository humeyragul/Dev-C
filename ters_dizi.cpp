#include <stdio.h>
 
main()
{
    int dizi[4]={1,2,3,4}; 
    int tersi[4];
     
    printf("dizinin kendisi: "); 
    for(int i = 0; i < 4; i++)
    {
        printf("%d",dizi[i]);
    }
    printf("\nDizinin tersten yazilmis hali: "); 
     
    for(int i = 3; i >= 0; i--)
    {
        printf("%d", dizi[i]);
    }
    printf("\n");
    for(int i=3;i>=0;i--){
    	tersi[4-i]=dizi[i];
    	printf("%d ",tersi[4-i]);
	}
    return 0;
}
