#include<stdio.h>

int main()
{
	int i,size,check;
	int arr[100];
	printf(" Enter the size: ");
	scanf("%d", &size);
	
	for(i=0;i<size;i++)
	scanf("%d", &arr[i]);	

	printf(" Enter the number to find: ");
	scanf("%d", &check);
	
	for(i=0;i<size;i++)
	{
		if(arr[i] == check)
		printf(" the location of the number is %d",i);

	}

	
	return 0;
	
}
