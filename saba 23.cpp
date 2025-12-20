#include<stdio.h>
int main(){
	int num_1,num_2;
	printf("enter any two integers values:\n");
	scanf("%d%d",&num_1,&num_2);
	while((num_1!=0)&&(num_2!=0))
	{
		if (num_1>num_2)
		{
			num_1+num_1-num_2;
		}else{
			num_2=num_2-num_1;
		}
	}
	printf("the GCD is%d\n",num_1);
}