#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,c;
	//Initialise first two numbers
	int a=0,b=1;
	printf("Enter the number of terms: ");
	scanf("%d",&n);
	printf("\n %d\t%d\t",a,b);
	for(i=2;i<n;i++)
	{
		c=a+b;
		printf("%d\t",c);
		a=b;
		b=c;
	}
	return 0;	
}
