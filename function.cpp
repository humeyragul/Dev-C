#include<stdio.h>
void message(){//geriye return ile bir �ey d�nd�rmeyeceksem void derim
	printf("No w I can write a function\n");
}
void nameList(const char*name/*i�aret�i*/,int age){
	printf("Hello %s you are %d years old\n",name,age);
}
int main(){
	
	message();
	nameList("FHG",19);
	nameList("Fatma",20);
	return 0;
}
