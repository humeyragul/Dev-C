//gaz bas�nc�n� hesaplama
#include<stdio.h>
int main(){
	float mol,T,V,P,constantR;
	constantR=0.82;
	
	printf("Gaz�n mol,s�cakl�k ve hacim degerini giriniz: ");
	scanf("%f%f%f",&mol,&T,&V);
	
	P=(mol*constantR*T)/V;
	printf("Basin� degeri: %f",P);
	return 0;
}
