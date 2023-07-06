#include<stdio.h>
int main()
{
	int dizi[10],i;
	printf("Dizi elemanlarini girin ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&dizi[i]);
		if(dizi[i]%2==0){
			printf("Cift sayiyim\n");
		}
		else
		printf("Tek sayiyim\n");
	}
}
