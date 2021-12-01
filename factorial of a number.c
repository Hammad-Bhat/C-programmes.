#include<stdio.h>

int main()
{
	int fact = 1,number,i;
	printf(" Enter the number to find the fctorial of : ");
	scanf("%d", &number);
	
	for(i=1;i<=number;i++)
	{
		fact = fact * i;
		
	}
	printf("%d ", fact);
	
	return 0;

}
