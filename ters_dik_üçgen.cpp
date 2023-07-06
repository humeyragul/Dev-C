//ters dik üçgen
#include<stdio.h>
int main()
{
	int i,satir,j,k;
	printf("satir sayisini giriniz: ");
	scanf("%d",&satir);
	
	for(i=0;i<satir;i++){
		for(j=satir-i;j>0;j--){
		printf("*");
		
	}
	printf("\n");
	}
	return 0;
}
