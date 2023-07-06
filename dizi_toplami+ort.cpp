//dizideki elemanlarýn toplamý ve ortalamasý
#include<stdio.h>
int main()
{
	int i,sum=0,a[10]={-5,-9,7,89,-185,45,78,63,-56,-74};
	
	for(i=0;i<10;i++){
		sum=sum+a[i];
	}
	printf("toplam:%d",sum);
	printf("\nortalama:%d",sum/10);
	return 0;
}
