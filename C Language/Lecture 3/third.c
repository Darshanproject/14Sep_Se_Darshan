/*
else if leadder
syntax:
if(Condtion){
	true statement;
}else if(Condtion){
	true statement;
}else{
	false statement;
}
*/
#include<stdio.h>
int main(){
	int marks;
	printf("Enter your marks here : ");
	scanf("%d",&marks);
	if(marks > 90 && marks<=100){
		printf("A grade!!!");
	}else if(marks > 80 && marks <=90){
		printf("B grade !!");
	}else if(marks > 60 && marks <=80){
		printf("C grade!");
	}else if(marks > 55 && marks <=60){
		printf("D grade ");
	}else if(marks > 35 && marks <= 55){
		printf("Just Pass");
	}else if(marks < 35 && marks > 0){
		printf("Fail");
	}else {
		printf("Invalid Input");
	}
	return 0;
}




