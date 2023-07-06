//basamaklarin toplami
#include<stdio.h>
int main()
{
	int sayi,sum=0,i;
	
	printf("Bir sayi giriniz: ");
	scanf("%d",&sayi);
	
	while(sayi>0)
	{
		i=sayi%10;
		sum+=i;
		sayi=sayi/10;
	}
	printf("Toplam:%d",sum);
	return 0;
}
