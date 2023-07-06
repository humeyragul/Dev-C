//dizi-tersi
#include<stdio.h>
int main()
{
	int a[3]={1,2,3};
	int tersi[3];
	
	printf("Düzü:");
	for(int i=0;i<3;i++){
		printf("%d ",a[i]);
	}
	for(int i=3;i>=0;i++){
		tersi[3-i]=a[i];
		printf("%d",tersi[3-i]);
	}
	return 0;
}
