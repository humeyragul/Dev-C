/*
1-Fakt�riyeli al�nacak sayiyi girniz
2-i=0 atay�n�z
3-sonuc=1 atay�n�z
4-i girilen say�ya e�it olana kadar sonuc=sonuc*i i�lemini yap�n�z
5-i yi birer birer art�r�n�z
6-sonucu ekrana yazd�r�n�z*/
#include<stdio.h>
int main()
{
	int n,i,sonuc=1;
	printf("Fakt�riyeli al�nacak sayiyi girniz: ");
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

