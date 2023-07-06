#include<stdio.h>
int main(){
	for(int i=1;i<=10;i++){
		printf("\t%d",i);
	}
	printf("\n-----------------------------------------------------------------------");
	for(int j=1;j<=10;j++){
		printf("\n%d|",j);
		for(int k=1;k<=10;k++){
			printf("\t%d",j*k);
		}
	}
}
