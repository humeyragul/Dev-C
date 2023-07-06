//girilen sayiyi ters yazan program
#include<stdio.h>
int main()
{
	int sayi,i;
	
	printf("Bir sayi giriniz: ");
	scanf("%d",&sayi);
	
	printf("Sayinin tersi: ");
	while(sayi>0)
	{
		i=sayi%10;
		printf("%d",i);
		sayi=sayi/10;
	}
	return 0;
}
