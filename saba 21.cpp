#include<stdio.h>
int main(){
	int no;
	printf("enter any number from 1 to3:");
	scanf ("%d",&no);
	switch(no){
	case 1:
	printf("\n it is 1!");
	break;
	case 2:
	printf("\n it is 2!");
	break;
	case 3:
	printf("\n it is 3!");
	break;
	default:
	printf("\n invalid number!");	
	}
}