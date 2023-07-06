//1 den 10 a kadar çarpım tablosu
#include<stdio.h>
int main()
{
	int i,j,k;
	
	for(i=1;i<=10;i++)
	{
		printf("\t%d",i);
	}
	printf("\n-------------------------------------------------------------------------------------");
	for(k=1;k<=10;k++)
	{
		printf("\n%d|\t",k);
		for(j=1;j<=10;j++)
	{
		printf("%d\t",k*j);
	}

	}
	return 0;
}
