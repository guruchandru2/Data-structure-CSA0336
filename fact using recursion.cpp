#include<stdio.h>
int fact(int);
int main()
{
	int x,n;
	printf("enter the number \n");
	scanf("%d",&n);
	x=fact(n);
	printf("factorial is %d",x,n);
	return 0;
}
int fact(int n)
{
	if(n==0)
	return(1);
	return(n*fact(n-1));
}