//aralýktaki asal sayilari yazdýrma
#include<stdio.h>
int main()
{
	int ilk,son,i,j,kontrol=0;
	printf("araligin ilk sayisini giriniz: ");
	scanf("%d",&ilk);
	
	printf("araligin son sayisini giriniz: ");
	scanf("%d",&son);
	
	for(i=ilk;i<=son;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				kontrol=1;
			}
			if(kontrol==!1)
			{
				printf("%d\n",i);
			}
			else
			kontrol=0;
		}
		
	}
	return 0;
}
