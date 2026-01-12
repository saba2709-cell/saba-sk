#include<stdio.h>
int main()
{
	int num,temp;
	printf("enter any integer value:\n");
	scanf("%d",&num);
	do{
		temp=num%10;
		printf("%d",&temp);
		num=num/10;
	}while(num!=0);
}