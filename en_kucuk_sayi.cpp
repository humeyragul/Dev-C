//kullan�c�dan deger alan ve en k���g�n� ekrana yazd�ran program
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
		printf("En b�y�k sayi=%d",b);
		break;
		}
		
	}
	return 0;
}
