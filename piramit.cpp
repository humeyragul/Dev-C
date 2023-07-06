//piramit
#include<stdio.h>
int main()
{
	int i,satir,j;
	printf("satir sayisini giriniz: ");
	scanf("%d",&satir);
	
	
	for(i=0;i<satir;i++){
		for(j=i;j<satir;j++)
		printf(" ");
		for(j=0;j<2*i+1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
