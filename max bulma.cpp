//kullanýcýdan 0 girene kadar sayý alan ve bunlarýn en büyüðünü bulan program
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
