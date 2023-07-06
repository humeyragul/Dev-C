//girilen sayinin basamak sayisi
#include<stdio.h>
int main()
{
	int sayi,sayac=0;
	
	printf("Bir sayi giriniz: ");
	scanf("%d",&sayi);
	
	while(sayi>0)
	{
		sayi/=10;
		sayac++;
	}
	printf("Basamak degeri:%d",sayac);
	return 0;
}
