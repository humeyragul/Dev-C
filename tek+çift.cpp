#include<stdio.h>
int main()
{
	int cift=0,tek=0,sayi_miktari,i,sayi;
	printf("Sayi miktarini giriniz: ");
	scanf("%d",&sayi_miktari);
	
	for(i=0;i<sayi_miktari;i++)
	{
		printf("Sayiyi giriniz: ");
		scanf("%d",&sayi);
		if(sayi%2==0){
			cift++;
		}
		else
		tek++;
	}
	printf("Cift sayi adedi:%d\nTek sayi adedi:%d",cift,tek);
	return 0;
}
