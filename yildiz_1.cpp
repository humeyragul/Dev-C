//yildiz
#include<stdio.h>
int main()
{
	int i,satir,j;
	printf("satir sayisini giriniz: ");
	scanf("%d",&satir);
	
	for(i=1;i<satir;i++){
		for(j=1;j<satir;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
