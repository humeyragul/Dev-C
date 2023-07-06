#include<stdio.h>
int main()
{
	int satir,i,j,k;
	
	printf("Satir: ");
	scanf("%d",&satir);
	
	for(i=1;i<=satir;i++){
		for(j=1;j<i;j++){
			printf(" ");
		}
		for(k=i;k<=satir;k++)
		{
			printf("*");
		}
		printf("\n");
		
	}
	return 0;
}
