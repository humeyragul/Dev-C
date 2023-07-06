//iki dizinin eþitliði
#include<stdio.h>
int main()
{
	int a[3]={1,2,3},b[3]={1,2,3};
	int i,k=0,l=0,m=0;
	
	printf("Birinci dizi: ");
	for(i=0;i<3;i++)
	{
		printf("%d ",a[i]);
		k++;
	}
	printf("\nIkinci dizi: ");
	for(i=0;i<3;i++)
	{
		printf("%d ",b[i]);
		l++;
	}
	for(i=0;i<3;i++){
		if(a[i]==b[i])
		m++;
	}
	if(k!=l||m!=3)
	printf("\nbu iki dizi birbirine esit degil");
	else
	printf("\nBirebir aynidir");
	return 0;
	}
