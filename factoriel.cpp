//faktöriyel hesaplama
#include<stdio.h>
int main()
{
	int n,i,fact;
	
	printf("Faktoriyeli alinacak sayi: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("Fact=%d",fact);
	return 0;
}
