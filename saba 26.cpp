#include<stdio.h>
int main(){
	int x;
	do{
		printf("enter any integers value:\n");
		scanf("%d",&x);
		printf("enter 0 to end......\n");
		printf("number=%d\n",x);
		printf("square=%d\n",x*x);
		printf("cube=%d\n",x*x*x);
	}while(x!=0);
}