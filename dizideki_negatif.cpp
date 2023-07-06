//dizideki negatifleri yazdýrma
#include<stdio.h>
int main()
{
	int i,a[10]={-5,-9,7,89,-185,45,78,63,-56,-74};
	
	for(i=0;i<10;i++){
		if(a[i]<0)
		printf("%d ",a[i]);
	}
	return 0;
}
