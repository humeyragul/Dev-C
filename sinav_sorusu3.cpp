//sýnav sorusu 3
#include<stdio.h>
int main()
{
	int dizi[4]={1,2,1,2},i,j,a=1,b=1,indeks=1;
	
	int uzunluk=sizeof(dizi)/sizeof(int);
	
	for(i=0;i<indeks;i++){
		a=a*dizi[i];
	}
	for(j=uzunluk-1;j>indeks;j--){
		b=b*dizi[j];
	}
	indeks++;
	if(a==b)
	printf("dizinin %d. indeksinin sagýnda ve solundakilerin carpimi esittir",indeks);
	else
	printf("Hicbir indekste carpimi esit degildir");
	return 0;
}
