#include<stdio.h>
main(){
	int i,num,m=0,n=0;
	for(i=1;i<=10;i++){
		printf("Enter your numbers here : ");
		scanf("%d",&num);
		if(num%2==0){
			printf("\nEven\n");
			m++;
		}else{
			printf("\nOdd\n");
			n++;
		}
	}
	printf("\nYou got this many even numbers : %d",m);
	printf("\nYou got this many odd numbers : %d",n);
}
