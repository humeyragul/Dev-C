//Bir n sayisina kadar olan tek sayilar ve toplamlari
#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("Bir n tam sayisi giriniz: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i+=2)
	{
		printf("%d ",i);
		sum=sum+i;
	}
	printf("\nsum=%d",sum);
	return 0;
}
