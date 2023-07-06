/*
1-Faktöriyeli alýnacak sayiyi girniz
2-i=0 atayýnýz
3-sonuc=1 atayýnýz
4-i girilen sayýya eþit olana kadar sonuc=sonuc*i iþlemini yapýnýz
5-i yi birer birer artýrýnýz
6-sonucu ekrana yazdýrýnýz*/
#include<stdio.h>
int main()
{
	int n,i,sonuc=1;
	printf("Faktöriyeli alýnacak sayiyi girniz: ");
	scanf("%d",&n);
	
	if(n==0){
		printf("Sonuc=1");
	}
	else{
	
	for(i=1;i<=n;i++){
		sonuc=sonuc*i;
	}
	printf("Sonuc:%d",sonuc);
}
return 0;
}

