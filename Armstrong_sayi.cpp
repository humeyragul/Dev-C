//Armstrog sayi kontrol etme
#include<stdio.h>
int main()
{
	int sayi,i,bas,sum=0,a;
	
	printf("Bir tamsayi giriniz: ");
	scanf("%d",&sayi);
	
	while(sayi>0)
	{
		bas=sayi%10;
		a=bas*bas*bas;
		printf("%d +",bas);
		sum+=a;
		sayi/=10;
	}
	printf("\nToplam= %d\n",sum);
	
	if(sum==sayi)
	{
		printf("Armstrong sayidir");
	}
	else
	{
		printf("Armstrong sayi degildir");
	}
	return 0;
	
}
