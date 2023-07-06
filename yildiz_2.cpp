//yildiz
#include<stdio.h>
int main()
{
	int i,satir,j;
	printf("satir sayisini giriniz: ");
	scanf("%d",&satir);
	
	for(i=0;i<satir;i++){
		for(j=0;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
