//kullan�c�dan 0 girene kadar say� alan ve bunlar�n en b�y���n� bulan program
#include<stdio.h>
int main(){
	int sayi,max=0;
	
	while(sayi!=0){
		printf("Sayi giriniz: ");
		scanf("%d",&sayi);
		if(sayi>max){
			max=sayi;
		}
		else if(sayi==0){
			printf("Program bitmistir\n");
			break;
		}
	}
	printf("en buyuk sayi %d",max);

	return 0;

}
