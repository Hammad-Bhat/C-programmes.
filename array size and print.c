#include<stdio.h>

int main()
{
	int size,i;
	printf(" Enter the size ");
	scanf("%d", &size);
	int arr[100];
	
	for(i=0;i<size;i++)
	scanf("%d", &arr[i]);
	
	for(i=0;i<size;i++)
	printf("%d", arr[i]);
	
	return 0;
	
}
