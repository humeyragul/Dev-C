//kullan�c�dan girilen sayinin asal olup olmad���n� kontrol eden program
#include<stdio.h>
int main()
{
	int sayi,i,kontrol=0;
	
	printf("Bir sayi giriniz: ");
	scanf("%d",&sayi);
 
	
	for(i=2;i<sayi;i++)
	{
		if(sayi%i==0)
		kontrol=1;
		}
	if(kontrol==1)
	printf("Sayi asal degildir");
	else
	printf("Sayi asaldir");
	return 0;
}
