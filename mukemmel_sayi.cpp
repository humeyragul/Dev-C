//mukemmel sayi buldurma
#include<stdio.h>
int main()
{
	int a,i,sum=0;
	
	printf("bir tam sayi giriniz: ");
	scanf("%d",&a);
	
	printf("Bolenleri: ");
	for(i=1;i<a;i++)
	{
		if(a%i==0)
		{
		printf("%d ",i);
		sum+=i;
	    }
	}
	printf("\nToplam=%d\n",sum);
	if(sum==a){
	printf("Sayi mukemmel sayidir");}
	else
	printf("Sayi mukemmel sayi degildir");
	
	return 0;
}
