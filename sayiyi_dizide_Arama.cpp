//kullanýcýnýn girdiði degerin dizide olup olmadýðýna bakmak
#include<stdio.h>
int main()
{
	int i,b,bulundu=0,index,a[10]={1,2,3,4,5,6,7,8,9,10};
	printf("Bir sayi giriniz: ");
	scanf("%d",&b);
	
	for(i=0;i<10;i++){
		if(b==a[i]){
			bulundu=1;
			index=i;
			break;
		}
	}
	if(bulundu==1)
	printf("sayi %d indextedir",i);
	else
	printf("aradigin sayi yok");
	return 0;
}
/* int i,b,a[10]={1,2,3,4,5,6,7,8,9,10};
	printf("Bir sayi giriniz: ");
	scanf("%d",&b);
	
	for(i=0;i<10;i++){
		if(b==a[i]){
			printf("%d.indekstedir ",i);
		}
	}
	else
	printf("aradigin sayi yok");*/
	
