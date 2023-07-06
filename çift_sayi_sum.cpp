//Girlen n sayisi kadar çift sayi yazdiran program
#include<stdio.h>
int main()
{
	int a,i,n=0,sum=0;
	
	printf("Bir n tam sayisi giriniz: ");
	scanf("%d",&a);
	
	while(n<a)
	{
		i=2*n;
		n++;
		printf("%d ",i);
		sum+=i;
	}
	int ort=sum/a;
	printf("\nort=%d",ort);
	return 0;
}
