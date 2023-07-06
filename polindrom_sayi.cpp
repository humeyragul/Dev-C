//polindrom sayi bulma
#include<stdio.h>
int main()
{
	int sayi,i,tersi,sum=0;
	
	printf("Bir sayi giriniz: ");
	scanf("%d",&sayi);
	
	tersi=sayi;
	while(sayi>0)
	{
		i=sayi%10;
		sum=(sum*10)+i;
		sayi=sayi/10;
	}
	printf("Sayinin tersi:%d\n",sum);
	if(tersi==sum)
	printf("Polindrom sayidir");
	else
	printf("Polindrom sayi degildir");
	return 0;
}
