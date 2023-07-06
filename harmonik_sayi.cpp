//n degeri isteyen ve harmonik þekilde yazdýran program
#include<stdio.h>
int main()
{
	int n,i;
	float a,sum=0;
	
	printf("bir n sayisi giriniz: ");
	scanf("%d",&n);
	
	printf("1 + ");
	
	for(i=2;i<=n;i++)
	{
		a=1/(float)i;
		printf("1/%d + ",i);
		sum=sum+a;
		
		
	}
	printf("\n%.2f",sum+1);
	return 0;
}
