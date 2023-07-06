//Kullanýcýdan 20 tane sayi isteyen ve toplam ile ort bulan program
#include<stdio.h>
int main()
{
	int n,i,sum=0,ort;
	
	for(i=1;i<=20;i++)
	{
		printf("Sayi giriniz: ");
		scanf("%d",&n);
		sum+=n;
	}
	ort=sum/20;
	printf("ort: %d",ort);
	return 0;
}
