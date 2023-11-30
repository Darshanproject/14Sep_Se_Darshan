/*
simple if
syntax:
	if(Constion){
	true statement
	}
	syntax:
if else
	if(Constion){
	true statement
	}else{
		flase statement
	}
*/
#include<stdio.h>
main(){
	int num;
	printf("Enter your age here : ");
	scanf("%d",&num);
	if(num>18){
		printf("You can go in");
	}else{
		printf("You can't go in "); 
	}
}
