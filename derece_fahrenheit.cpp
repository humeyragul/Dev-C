#include<stdio.h>
int main()
{
	char c,F,C;
	int sayi,c1,f,fah,der;
	printf("Fahrenheitdan Celsiusa cevirmek icin F giriniz.\nCelsiusdan Fahrenheita çevirmek için C giriniz.");
	printf("\nSeciminizi giriniz (C veya F): ");
	scanf("%s",&c);
	
	
	
	if(c=='F')
	{
		fflush(stdin);
		printf("Fahrenheit degerini girin: ");
		scanf("%d",&fah);
		c1=(fah-32)*5/9;
		printf("%dF = %d C",fah,c1);
	}
	if(c=='C')
	{
		fflush(stdin);
		printf("Derece degerini girin: ");
		scanf("%d",&der);
		f=(der*9/5)+32;
		printf("%dC = %d F",der,f);
	}
	return 0;
}
