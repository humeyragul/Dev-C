//baklava dilimi
#include<stdio.h>
int main()
{
	int satir,i,j,k;
	
	printf("Satir: ");
	scanf("%d",&satir);
	
	for(i=0;i<satir;i++){
		for(j=i;j<satir;j++){
			printf(" ");
		}
		for(k=0;k=2*i+1;k++){
			printf("*");
		}
		printf("\n");
	}
	
	for(i=1;i<=satir-1;i++){
		for(j=1;j<i;j++)
		printf(" ");
		for(j=1;j<=2*(satir-1)-(2*i-1);j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
