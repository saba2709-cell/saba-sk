#include<stdio.h>
int main(){
	int k,temp;
	printf("enter any  numbeer:\t");
	scanf("%d",&k);
	temp=k%2;
	if(temp==0)
	{
		printf("The entered number is even");
	}else{
		printf("the entered number is odd");
	} return 0;
}