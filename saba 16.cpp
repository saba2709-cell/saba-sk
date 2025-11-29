#include<stdio.h>
int main(){
	int a,b;
	printf("Enter number:");
	scanf("%d",&a);
	if(a<=b)
	{
		b=a<<2;
		printf("left shift gives us-%d",b);
	} else{
		b=a>>1;
		printf("single right shift gives us=%d",b);
	}
}