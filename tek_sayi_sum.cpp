//Girlen n sayisi kadar tek sayi yazdiran program
#include<stdio.h>
int main()
{
	int a,i,n=0,sum=0;
	
	printf("Bir n tam sayisi giriniz: ");
	scanf("%d",&a);
	
	while(n<a)
	{
		i=2*n+1;
		n++;
		printf("%d ",i);
		sum+=i;
	}
	printf("\nSum=%d",sum);
	return 0;
}
