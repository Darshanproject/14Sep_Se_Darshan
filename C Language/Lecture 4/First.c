/*
Syntax :
if (Condtion){
	if(Condtion){
	true ;
	}else{
	false;
	}
}else{

false;
}
*/

#include<stdio.h>
main(){
	int marks;
	printf("Enter your marks here : ");
	scanf("%d",&marks);
	if(marks > 0 && marks < 100){
		if(marks > 90 && marks <100)
		{
			printf("A Grade !!!");
		}else if(marks > 80 && marks <=90)
		{
			printf("B grade !!");
		}else if(marks > 70 && marks <= 80 ){
			printf("C grade !");
		}else if(marks > 50 && marks <=70){
			printf("D grade");
		}else if(marks > 35 && marks <=50){
			printf("Pass");
		}else{
			printf("Fail");
		}
	}else{
		printf("Invalid Input");
			}
	}
