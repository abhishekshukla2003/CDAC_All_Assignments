#include<stdio.h>

int lastOccurrence(int arr[],int n,int key)
{
	int lastIndex = -1;

	for(int i =0; i < n;i++)
	{
		if(arr[i] == key)
		{
			lastIndex = i; //update whever key is found
		}
	}
	return lastIndex;
}

int main()
{
	int arr[] = {2,5,3,7,5,9,5};
	int n = sizeof(arr)/sizeof(arr[0]);
	int key =5;

	int index = lastOccurrence(arr,n,key);

	if(index != -1)
		printf("Last occurrence of %d is at index %d\n",key,index);
	else
		printf("%d not found in array\n",key);

		return 0;
}
