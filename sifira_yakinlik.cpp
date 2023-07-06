//kullanýcýdan istenilen sayinin hangisinin 0a daha yakýn oldugunu bulan program
#include<stdio.h>
int main()
{
	int a,b;
	
	printf("Iki tam sayi giriniz: ");
	scanf("%d%d",&a,&b);
	
	if(a<0)
	a=a*-1;
	if(b<0)
	b=b*-1;
	
	if(a<b)
	printf("%d sayisi sifira daha yakindir",a);
	else
	printf("%d sayisi sifira daha yakindir",b);
	
	return 0;
}
