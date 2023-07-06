//onluk tabanda verilen sayinin ikilik tabana dönüşmesi
#include<stdio.h>
int main()
{
	int sayi,bs;
	
	printf("0 ile 31 arasinda bir tam sayi giriniz: ");
	scanf("%d",&sayi);

	while(sayi>0)
	{
		bs=sayi%2;
		sayi/=2;
		printf("%d",bs);
	}
	return 0;
}
