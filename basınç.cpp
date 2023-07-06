//gaz basýncýný hesaplama
#include<stdio.h>
int main(){
	float mol,T,V,P,constantR;
	constantR=0.82;
	
	printf("Gazýn mol,sýcaklýk ve hacim degerini giriniz: ");
	scanf("%f%f%f",&mol,&T,&V);
	
	P=(mol*constantR*T)/V;
	printf("Basinç degeri: %f",P);
	return 0;
}
