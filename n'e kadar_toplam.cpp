//Birden kullanýcýnýn girdiði sayiya kadar olan sayilarin toplami
#include<stdio.h>
int main()
{
	int n,toplam;
	
	printf("Pozitif bir tam sayi giriniz: ");
	scanf("%d",&n);
	
	toplam=((n+1)*n)/2;
	printf("Toplam degeri:%d",toplam);
	
	return 0;
}
