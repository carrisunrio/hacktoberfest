#include<stdio.h>
#include<conio.h>
int leap_check(int y)
{
	if(y%400==0)
		return 1;
	else if(y%100==0)
			return 0;
		else if(y%4==0)
				return 1;
			else
				return 0;
}
int main()
{
	int x,flag;
	printf("Enter the year to be checked : ");
	scanf("%d",&x);
	flag=leap_check(x);
	if(flag==1)
		printf("%d is a leap year",x);
	else if(flag==0)
			printf("%d is not a leap year",x);
	return 0;
}
