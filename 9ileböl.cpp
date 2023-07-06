//100 ile 200 arasý 9 ile tam bölünen sayilar
#include<stdio.h>
int main()
{
	int i,sum=0;
	
	for(i=108;i<200;i+=9)
	{
		printf("%d ",i);
		sum+=i;
	}
	printf("\nsum=%d",sum);
	return 0;
}
