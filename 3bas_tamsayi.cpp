//kullanýcýdan 3 basamaklý sayi isteyen ve sayinin basamak degerlerini toplayan program
#include<stdio.h>

int main()
{
	int sayi;
	
	printf("3 basamakli bir tam sayi giriniz: ");
	scanf("%d",&sayi);
	
	int bsmk1=(sayi%100)%10;
	int bsmk2=sayi/100;
	int bsmk3=(sayi/10)%10;
	
	printf("Toplam:%d",bsmk1+bsmk2+bsmk3);
	
	return 0;
}
