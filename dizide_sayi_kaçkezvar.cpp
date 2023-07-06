//girilen sayi dizide kac kez geciyor
#include<stdio.h>
int main()
{
	int i,b,bulundu=0,index,a[10]={1,2,3,4,5,6,6,6,9,10};
	printf("Bir sayi giriniz: ");
	scanf("%d",&b);
	
	for(i=0;i<10;i++){
		if(b==a[i]){
			bulundu++;
		}
	}
	if(bulundu==0)
	printf("aradigin sayi yok");
	else
	printf("sayi %d kadar geciyor",bulundu);
	
	return 0;
}
