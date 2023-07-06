//Girilen n sayisinin faktoriyelini bulan program
#include<stdio.h>
int main()
{
	int n,i=1,faktoriyel=1;
	
	printf("Faktoriyeli hesaplanacak sayi degerini girin: ");
	scanf("%d",&n);
	
	if(n<0)
	{
		printf("Girdiginiz sayi gecersizdir");
		return 1;
	}
	
	for(i=1;i<=n;i++)
	{
		faktoriyel=faktoriyel*i;
	}

	printf("%d sayisinin faktoriyel degeri = %d",n,faktoriyel);
	return 0;
}
