#include<stdio.h>
void message(){//geriye return ile bir þey döndürmeyeceksem void derim
	printf("No w I can write a function\n");
}
void nameList(const char*name/*iþaretçi*/,int age){
	printf("Hello %s you are %d years old\n",name,age);
}
int main(){
	
	message();
	nameList("FHG",19);
	nameList("Fatma",20);
	return 0;
}
