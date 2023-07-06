#include<stdio.h>
int main()
{
	int sayi_adedi,i,sayi,en_buyuk=0;
	printf("Sayi adedini giriniz: ");
	scanf("%d",&sayi_adedi);
	
	for(i=0;i<sayi_adedi;i++)
	{
		printf("Sayiyi giriniz: ");
		scanf("%d",&sayi);
		if(sayi>=en_buyuk){
			en_buyuk=sayi;
		}
	}
	printf("En buyuk sayi:%d",en_buyuk);
	return 0;
}
