//Kullan�c�dan dizi sayisini isteyen ve bunu ekrana yazd�ran program
#include<stdio.h>
int main()
{
	int dizi[10];
	int i,sayi,eleman;
	
	printf("Diziniz kac elemanlidir giriniz: ");
	scanf("%d",&sayi);
	
	
	for(i=0;i<sayi;i++)
	{
		printf("Dizinin %d.elemanini giriniz: ",i+1);
		scanf("%d",&eleman);
	}
	return 0;
}
