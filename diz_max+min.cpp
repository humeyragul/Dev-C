//dizideki max ve min
#include<stdio.h>
int main()
{
	int i,min,max,a[10]={-5,-9,7,89,-185,45,78,63,-56,-74};
	
	for(i=0;i<10;i++){
		if(i==0||a[i]<min)
		min=a[i];
		if(i==0||a[i]>max)
		max=a[i];
	}
	printf("min:%d\nmax:%d",min,max);
	return 0;
}
