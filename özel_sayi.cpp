//girilen say�n�n �zel say� olup olmad���n� bulan program
#include<stdio.h>
int main(){
	int sayi,sayi2,sayi3,newnumber;
	printf("4 basamakli sayi giriniz: ");
	scanf("%d",&sayi);

	sayi2=sayi/100;
	sayi3=sayi%100;
	
	newnumber=(sayi2*sayi2)+(sayi3*sayi3);
	if(newnumber==sayi){
		printf("sayi �zel sayidir");
	}
	else{
		printf("Sayi ozel sayi degildir");
	}
	return 0;
}
