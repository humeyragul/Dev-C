//10 elemanl� bir dizi olu�tur. indisi tek say� olanlarda ben tek say� indisiyim,�ift olanlarda ben �ift say� indisiyim yazan bir program
#include<stdio.h>
int main()
{
	int i,dizi[10]={1,2,3,4,5,6,7,8,9,10};
	for(i=0;i<10;i++)
	{
		if(i%2==0){
			printf("�ift say� indisiyim");
		}
		else
		printf("Tek sayi indisiyim");
	}
}
