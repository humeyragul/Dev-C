//dizideki tek sayileri yazd�ran program
#include<stdio.h>
int main()
{
	int i,sum=0,a[10]={1,2,3,4,5,6,7,8,9,10};
	
	for(i=0;i<10;i++){
		if(a[i]%2==!0)
		printf("%d ",a[i]);
	}
	return 0;
}
