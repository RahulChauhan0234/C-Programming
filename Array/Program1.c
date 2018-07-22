/*
 ============================================================================
 Program Name 	: Program1
 Author       	: Rahul Chauhan
 Topic		: Array
 Description	: Program to Dynamically Allocate 2D Array
 ============================================================================
 */

#include<stdio.h>
#include<stdlib.h>

void main()
{
	int **arr,row,col,i,j;
	printf("enter the number of Rows");
	scanf("%d",&row);
	/* Allocate  a One Dimentional array of int pointers */
	arr = (int**)malloc(row*sizeof(int*));
	printf("enter the Number of cloumns");
	scanf("%d",&col);
	/* Allocate  a One Dimentional Array of int for each row pointers */
	for(i=0;i<row;i++)
	{
		arr[i] =(int*)malloc(col*sizeof(int));
	}
	
	/* Fill the data in 2D Array */
	for(i=0;i<row;i++)
	{	
		for(j=0;j<col;j++)
		{
			arr[i][j]=2;
		}
	}
	/* print 2D Array */
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}

}

/*
 ============================================================================
 OutPut:

	enter the number of Rows3
	enter the Number of cloumns6
	
	2	2	2	2	2	2	
	2	2	2	2	2	2	
	2	2	2	2	2	2	

 ============================================================================
*/










