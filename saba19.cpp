#include<stdio.h>
int main(){
	int total,m1,m2,m3;
	char grade[10],result,name[15];
	float average;
	printf("enetr a name:");
	scanf("%s",name);
	printf("enter marks for three subjects:");
	scanf("%d%d%d",&m1,&m2,&m3);
	total=m1+m2+m3;
	average=total/3;
	if(average>75)
	printf("distinction");
	else if((average>59)&&(average<=75))
printf("first");
else if((average>49)&&(average<60))
printf("second");
else if((average>39)&&(average<50))
printf("third");
else
printf("fail");
printf("\tstudentname\t marks\t average\t grade ");
printf("\t%s\t%d\t%d\t%d\t%f\t%s",name,m1,m2,m3,average,grade);
}