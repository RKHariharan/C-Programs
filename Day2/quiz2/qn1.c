#include<stdio.h>
int main()
{
	int row,col;
	printf("Enter no of rows and columns : ");
	scanf("%d %d",&row,&col);
	int arr[row][col];
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			printf("Enter element for %d%d : ",i+1,j+1);
			scanf("%d",&arr[i][j]);
		}
	}
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	return 1;
}
