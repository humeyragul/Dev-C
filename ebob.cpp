//Ebob hesaplama
#include<stdio.h>
int main()
{
	int a,b,ebob,i;
	
	printf("Sayileri girin: ");
	scanf("%d%d",&a,&b);
	
	for(i=1;i<=a&&i<=b;i++)
	{
		if(a%i==0&&b%i==0)
		ebob=i;
	}
	printf("ebob=%d",ebob);
	return 0;
}
