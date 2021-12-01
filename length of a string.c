#include<stdio.h>

int main()
{
	char str[100];
	int i;
	printf(" Enter the string ");
	gets(str);
	for(i=0;str[i]!='\0';i++);
	printf(" length of string is %d", i);
	
	return 0;
	
}
