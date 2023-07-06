//iki dizideki ortak elemanlar
#include<stdio.h>
int main()
{
	int a[4]={1,2,3,4},b[5]={2,5,4,9,1},i,j;
	for(i=0;i<4;i++)
	{
		for(j=0;j<5;j++){
			if(a[i]==b[j])
			printf("%d ",a[i]);
		}
	}
	return 0;
}
