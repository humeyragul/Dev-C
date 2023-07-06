//ters dönmüþ üçgen
#include<stdio.h>
int main()
{
	int satir,i,j,k;
	
	printf("Satir: ");
	scanf("%d",&satir);
	
	for(i=0;i<=satir;i++){
		for(j=0;j<satir-i;j++){
			printf(" ");
		}
		for(k=0;k<i;k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
