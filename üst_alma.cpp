#include<stdio.h>
int main()
{
	int taban,us,sonuc=1,i;
	
	printf("Bir taban ve us degeri giriniz: ");
	scanf("%d%d",&taban,&us);
	
	if(taban!=0){
	for(i=1;i<=us;i++){
		sonuc=sonuc*taban;
 }
	printf("Sonuc:%d",sonuc);	
	}
	else if(taban==0){
		printf("Sonuc=0");
	}
	else if(us==0){
		printf("Sonuc=1");
	}
	else if(us==0&&taban==0){
		printf("Tan�ms�z");
	}
		
	return 0;
}
/*
1-kullan�c�dan a ve b say�lar�n� al
2-i ye 0 ata sonucu 1 ata
3-i b den k���k oldu�u takdirde sonucu a ile �arp*/
