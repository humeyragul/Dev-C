//kullanýcýdan deger alan ve en küçügünü ekrana yazdýran program
#include<stdio.h>
int main()
{
	int a,i,b=0;
	
	for(i=0;i<3;i++)
	{
		printf("Sayi degerini giriniz: ");
		scanf("%d",&a);
		if("a>b")
		b=a;
		else{
		printf("En büyük sayi=%d",b);
		break;
		}
		
	}
	return 0;
}
