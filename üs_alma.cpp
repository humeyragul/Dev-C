//üssü sayi yazdirma
#include<stdio.h>
int main()
{
	int a,b,i,son=1;
	
	printf("Tabana degerini giriniz: ");
	scanf("%d",&a);
	
	printf("Us degerini giriniz: ");
	scanf("%d",&b);
	for(i=1;i<=b;i++)
	{
		son=son*a;
	}
	printf("%d^%d=%d",a,b,son);
	return 0;
}
