#include<stdio.h>
int main()
{
	int arr[1000],e,i,n;
	printf("enter array size \n");
	scanf("%d",&n);
	printf("enter array elements \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter element to search \n");
	scanf("%d",&e);
	for(i=0;i<n;i++)
	{
		if(arr[i]==e)
		{
			printf("%d found at position %d",e,i+1);
			return 0;
		}
			
	}
}