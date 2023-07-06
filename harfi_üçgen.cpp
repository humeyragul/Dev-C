#include <stdio.h>
int main()
{
    int i, j, satir, k, ch = 'A';
    printf("satir: ");
    scanf("%d",&satir);
    
    for(i=0;i<satir;i++){
    	for(j=1;j<=i;j++)
    	printf(" ");
    	for(j=i;j<satir;j++){
    		printf("%c",ch);
		}
		ch++;
		printf("\n");
	}
    
    return 0;
}


