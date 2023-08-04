#include<stdio.h>
int main()
{
	int i,n;
	printf("enter number of elements \n");
	scanf("%d",&n);
	int arr[n];
	printf("enter the elements in an array \n");
	for(i=0;i<n;i++)
	{
	    scanf("%d",&arr[i]);
    }
    printf("enter even numbers in an array \n");
    for(i=0;i<n;i++)
    {
    	if(arr[i]%2==0)
    	printf("%d",arr[i]);
	}
	printf("enter odd numbers in an array \n");
	for(i=0;i<n;i++)
	{
		if(arr[i]%2==1)
		printf("%d",arr[i]);
	}
	return 0;

}