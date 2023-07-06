#include<stdio.h>
int main()
{
	int n,i=0,j=0,cift=0;
	
	printf("Bir adet n sayisi giriniz: ");
	scanf("%d",&n);
	
	printf("Cift sayilar:");
	while(i<=n){
		if(i%2==0){
			printf("%d ",i);
			cift=cift+i;
		}
		i++;
	}
}
