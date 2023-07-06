//10 elemanlý bir dizi oluþtur. indisi tek sayý olanlarda ben tek sayý indisiyim,çift olanlarda ben çift sayý indisiyim yazan bir program
#include<stdio.h>
int main()
{
	int i,dizi[10]={1,2,3,4,5,6,7,8,9,10};
	for(i=0;i<10;i++)
	{
		if(i%2==0){
			printf("Çift sayý indisiyim");
		}
		else
		printf("Tek sayi indisiyim");
	}
}
