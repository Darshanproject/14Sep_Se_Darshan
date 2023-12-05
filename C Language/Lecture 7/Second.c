#include<stdio.h>
void main(){
	int i,number[5],sum=0,another[2];
	for(i=0;i<5;i++){
		printf("Enter your numbers here [%d]",i);
		scanf("%d",&number[i]);
		sum+=number[i];	
		another[0]=number[0];
		another[1]=number[4];
	}
	for(i=0;i<2;i++){
		printf("%d \n",another[i]);
	}
	printf("%d \n",sum);
}
