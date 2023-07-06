//ters yildiz
#include<stdio.h>
int main()
{
	int i,satir,j;
	printf("satir sayisini giriniz: ");
	scanf("%d",&satir);
	
	for(i=satir;i>0;i--){
		for(j=i;j>0;j--)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
