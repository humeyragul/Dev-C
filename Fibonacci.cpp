//Fibonacci degerini yazdýran program
#include<stdio.h>
int main()
{
	int sayi,i,ilk=1,ikinci=1;
	
	printf("Bir sayi giriniz: ");
	scanf("%d",&sayi);
	
	printf("0\n%d\n%d\n",ilk,ikinci);
	for(i=0;i<sayi-3;i++)
	{
		int temp=ikinci;
		ikinci+=ilk;
		ilk=temp;
		printf("%d\n",ikinci);
	}
	return 0;
}
