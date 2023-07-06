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
		printf("Tanýmsýz");
	}
		
	return 0;
}
/*
1-kullanýcýdan a ve b sayýlarýný al
2-i ye 0 ata sonucu 1 ata
3-i b den küçük olduðu takdirde sonucu a ile çarp*/
