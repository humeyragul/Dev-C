#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Satir");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	
	printf("\n\n\n");
	int k,l;
	for(k=1;k<=n;k++)
	{
		for(j=n;j>=k;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	printf("\n\n\n");
	
	int m,o;
	for(m=n;m>0;m--){
		for(o=1;o<=m;o++){
			printf("%d",o);
		}
		printf("\n");
	}
}
