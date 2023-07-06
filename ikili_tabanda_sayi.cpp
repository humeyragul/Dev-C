//dört basamaklý ikili tabanda sayi giriniz
#include<stdio.h>
int main(void)
{
	int sayi;
	int i,sum=0,a=1,onluk=0;
	
	printf("Dört basamaga kadar ikili tabanda sayi giriniz: ");
	scanf("%d",&sayi);
	
	while(sayi>0){
		onluk=onluk+(sayi%10)*a;
		a*=2;
		sayi/=10;
		
	}
	printf("toplam:%d",onluk);
	return 0;
}
