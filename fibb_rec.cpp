#include<stdio.h>
int fibb(int n)
{
	//base case
	if(n==0)
		return 0;
	if(n==1)
		return 1;
	//induction hypothesis
	int ans1=fibb(n-1);
	int ans2=fibb(n-2);
	//induction step
	int myAns=ans1+ans2;
	return myAns;
}
int main()
{
	int n,f;
	printf("Enter which fibonacci no to display: ");
	scanf("%d",&n);
	f=fibb(n);
	printf("\n %dth fibonacci no is: %d",n,f);
	return 0;
}
