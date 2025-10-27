//AscDescSort():
//This program is used to sort and print the numbers which are given either in Ascending Order or Descending Order.

//Preprocessing Directives:
#include "../src/includes/NumTypes.h"

int AscSort(long long *arr, long long size)
{
	long long j;
	for(i=0;i<=size;i++)
	{
		for(j=i+1;j<(size);j++)
		{
			if(arr[i]>arr[j])
			{	
				num=arr[i];
				arr[i]=arr[j];
				arr[j]=num;
			}
		}
	}
	printf("\nAfter Sorting: ");
	for(i=0;i<size;i++)
	{
		printf("%lld ", arr[i]);
	}
	printf("\n");
	return 1;
}

int DescSort(long long *arr, long long size)
{
	long long j;
	for(i=0;i<=size;i++)
	{
		for(j=i+1;j<(size);j++)
		{
			if(arr[i]<arr[j])
			{
				num=arr[i];
				arr[i]=arr[j];
				arr[j]=num;	
			}
		}
	}
	printf("\nAfter Sorting: ");
	for(i=0;i<size;i++)
	{
		printf("%lld ", arr[i]);
	}
	printf("\n");
	return 1;
}
