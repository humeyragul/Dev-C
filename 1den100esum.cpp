//For döngü örnekleri
#include<stdio.h>
int main()
{
	int i,sum=0;
	
	for(i=1;i<100;i++)
	{
		printf("%d ",i);
		sum+=i;
	}
	printf("\nSum=%d",sum);
	return 0;
}
