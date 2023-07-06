//kullanıcıdan saniye degeri alan ve bunun kaç saat kaç saniye oldugunu hesaplayan program
#include<stdio.h>

int main()
{
	int sn;
	
	printf("Saniye degerini giriniz: ");
	scanf("%d",&sn);
	
	int saat=sn/3600;
	int dk=(sn%3600)/60;
	int saniye=sn%60;
	
	printf("%d sn=%d sa %d dk %d sn",sn,saat,dk,saniye);
	return 0;
}
