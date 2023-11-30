/*
int num = 10;
ans = num+num1;
short hand 
+= -= *= /=
num+=num1;

*/
#include<stdio.h>
main(){
	int  num,num1,ans;
	printf("Enter your numbers here : ");
	scanf("%d",&num);
	printf("Enter your numbers here : ");
	scanf("%d",&num1);
//	ans=num+num1;
//	printf("This is your addtion %d \n",ans);
	printf("This is your addtion  %d \n",num+=num1);
	
	printf("This is your num %d",num);
}
