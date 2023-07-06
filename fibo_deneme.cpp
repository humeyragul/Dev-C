//fibonacci deneme
#include<stdio.h>
int main()
{
	int a,i,ilk=0,ikinci=1;
	
	printf("bir sayi giriniz: ");
	scanf("%d",&a);
	
	printf("%d\n%d\n",ilk,ikinci);
	
	for(i=1;i<a-1;i++)
	{
		int temp=ikinci;
		ikinci=ilk+ikinci;
		ilk=temp;
		printf("%d\n",ikinci);
	}
	return 0;
}
