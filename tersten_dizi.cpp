//diziyi tersten yazd�rma
#include<stdio.h>
int main()
{
	int a[10],i;
	
	for(i=1;i<10;i++){
		printf("Bir sayi giriniz: ");
		scanf("%d",&a[i]);
	}
	for(i=9;i>0;i--){
		printf("%d ",a[i]);
	}
	return 0;
}
