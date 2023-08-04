#include<stdio.h>
int main()
{
	int arr[10],l,i,j;
	l=sizeof(arr)/sizeof(arr[0]);
	printf("enter elements in an array \n");
	for(i=0;i<l;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("duplicate elements are \n");
	for(i=0;i<l;i++)
	{
		for(j=i+1;j<l;j++)
		{
			if(arr[i]==arr[j])
			printf("%d",&arr[j]);
		}
	}return 0;
}