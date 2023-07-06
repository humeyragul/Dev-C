#include<stdio.h>

int main()
{
	int sayi,i,sonuc;
	
	printf("Bir sayi giriniz: ");
	scanf("%d",&sayi);
	
	for(i=1;i<=30;i++)
	{
		sonuc=sayi*i;
		printf("%d * %d = %d\n",sayi,i,sonuc);
	}
	return 0;
}
