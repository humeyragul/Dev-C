//ters piramit
#include<stdio.h>
int main()
{
	int i,satir,j;
	printf("satir sayisini giriniz: ");
	scanf("%d",&satir);
	
	
	for(i=1;i<=satir;i++){
		for(j=1;j<i;j++)
		printf(" ");
		for(j=1;j<=2*satir-(2*i-1);j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
