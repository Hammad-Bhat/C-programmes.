#include<stdio.h>

int main()
{
	int i,j,rows,columns;
	int a[100][100];
	printf("enter size of rows of a matrix ");
	scanf("%d",&rows);
	printf("enter size of columns of a matrix ");
	scanf("%d",&columns);
	for(i=1;i<=rows;i++){
		for(j=1;j<=columns;j++){
			scanf("%d",&a[i][j]);
		}
	}
		for(i=1;i<=rows;i++){
		for(j=1;j<=columns;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
