#include<stdio.h>
int main()
{
	int arr[1000], i, search , n;
	printf("enter the number of integers : ");
	scanf("%d",&n);
	printf("enter the %d integers : ");
	for(i=0; i<n ;i++)
	scanf("%d", arr[i]);
	
	printf("enter the digit to be found : ");
	scanf("%d", &search);
	
	for(i=0; i<n ;i++)
	if(arr[i]==search)
	 printf("the element %d is found at position %d", search, i+1);
	 
	else
	 printf("the given number is not found");
}
