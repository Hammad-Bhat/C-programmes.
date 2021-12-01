#include<stdio.h>

int main()
{
	int arr[100];
	int size,i;
	
	printf(" Enter the size of the array ");
	scanf("%d", &size);
	
	for(i=0;i<=size;i++)
	scanf("%d", &arr[i]);
	
	for(i=size;i>=0;i--)
	printf("%d ", arr[i]);
	
}
