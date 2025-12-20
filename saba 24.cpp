#include<stdio.h>
int main(){
	int choice, x, y;
	printf("enter any two number:\n");
	printf("%d%d",&x,&y);
	printf("\n various arithmetic operation:\n");
	printf("1. addition \n");
	printf("2.subtraction \n");
	printf("3.division \n");
	printf("4.multiplication \n");
	printf("5.modulus \n");
	printf("enter the number of the operation u want:\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
		printf("addition od %d and %d=%d\n",x,y,x+y);
		break;
		case 2:
		printf("subtraction of %d and %d=%d \n",x,y,x-y);
		break;
		case 3:
			printf("division of %d and %d is %d \n",x,y,x/y);
			break;
			case 4:
				printf("multiplication of %d an %d is %d \n",x,y,x/y);
				break;
				case 5:
					printf("modulus of %d and %d is %d \n",x,y,x%y);
					break;
					default:
						printf("no.....");
						break;
	}
}