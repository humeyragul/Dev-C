//kullan�c�dan 4 basamakl� say� al�p basamak de�erleri toplam�n� bulan program
#include<stdio.h>
int main(){
	int sayi,bas,sum=0;
	printf("4 basamakli sayi giriniz: ");
	scanf("%d",&sayi);
	
	while(sayi>0){
		bas=sayi%10;
		sum=sum+bas;
		sayi=sayi/10;
	}
	printf("Toplam deger: %d",sum);
	return 0;
}
