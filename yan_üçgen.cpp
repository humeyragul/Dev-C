//yan üçgen
#include<stdio.h>
int main()
{
	int satir,i,j,k;
	printf("SAtir: ");
	scanf("%d",&satir);
	
	for(i=1;i<=satir;i++){
	   for(j=1;j<=i;j++){
	   	printf("*");
	   }
	   printf("\n");
	}
	satir=satir-1;
	for(i=satir;i>0;i--){
		for(j=i;j>0;j--){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
