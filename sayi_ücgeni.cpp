#include<stdio.h>
int main()
{
	int n,i,j;
	printf("sayi gir: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		printf("%d",i);
		for(j=2;j<=i;j++){
			printf("%d",i);
		}
		printf("\n");
	}
}
