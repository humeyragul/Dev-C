//Kod-1:Kullan�c�dan veri isteme ve verileri i�lemde kullanma
#include<stdio.h>
int main()
{
	int a,b,c;
	
	printf("3 adet tam sayi giriniz: ");
	scanf("%d%d%d",&a,&b,&c);
	
	printf("Sayilarin toplami:%d\n",a+b+c);
	printf("Sayilarin farki:%d\n",a-b-c);
	printf("Sayilarin carpimi:%d\n",a*b*c);
	printf("Sayilarin ortalamasi:%d\n",(a+b+c)/3);
	
	return 0;
}
