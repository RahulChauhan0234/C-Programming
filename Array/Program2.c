/*
 ============================================================================
 Program Name 	: Program2
 Author       	: Rahul Chauhan
 Topic		: Array
 Description	: Program to Dynamically Allocate 2 2D Array and multiply it.
 ============================================================================
 */

#include<stdio.h>
#include<stdlib.h>

void main()
{
	int **arr1,row1,col1,**arr2,row2,col2,i,j,**mul_arr;
	
	/* Array1 */
	printf("enter the number of Rows for Array1:\t");
	scanf("%d",&row1);
	

	/* Allocate  a One Dimentional array of int pointers */
	arr1 = (int**)malloc(row1*sizeof(int*));
	printf("enter the Number of cloumns of array1:\t");
	scanf("%d",&col1);
	
	/* Allocate  a One Dimentional Array of int for each row pointers */
	for(i=0;i<row1;i++)
	{
		arr1[i] =(int*)malloc(col1*sizeof(int));
	}
	
	/* Fill the data in 2D Array1 */
	for(i=0;i<row1;i++)
	{	
		for(j=0;j<col1;j++)
		{
			arr1[i][j]=2;
		}
	}
	
	/* Array2 */ 
	printf("enter the number of Rows for Array2:\t");
        scanf("%d",&row2);

	 /* Allocate  a One Dimentional array of int pointers */
        arr2 = (int**)malloc(row2*sizeof(int*));
        printf("enter the Number of cloumns of array2:\t");
        scanf("%d",&col2);
        /* Allocate  a One Dimentional Array of int for each row pointers */
        for(i=0;i<row2;i++)
        {
                arr2[i] =(int*)malloc(col2*sizeof(int));
        }

        /* Fill the data in 2D Array2 */
        for(i=0;i<row2;i++)
        {
                for(j=0;j<col2;j++)
                {
                        arr2[i][j]=3;
                }
        }



	/* print 2D Array1 */
	printf("Arr1[%d][%d]\n",row1,col1);
	for(i=0;i<row1;i++)
	{
		for(j=0;j<col1;j++)
		{
			printf("%d\t",arr1[i][j]);
		}
		printf("\n");
	}
	printf("Arr2[%d][%d]\n",row2,col2);
	
	/* print 2D Array2 */
        for(i=0;i<row2;i++)
        {
                for(j=0;j<col2;j++)
                {
                        printf("%d\t",arr2[i][j]);
                }
                printf("\n");
        }
	if(col1 != row2)
	{
		printf("multiplication not possible");

	}
	else{
	     /* 2D Array arr_mul */	
	     /* Allocate  a One Dimentional array of int pointers for Multiplication Array*/
	     mul_arr = (int**)malloc(row1*sizeof(int*));
	     for(i=0;i<row1;i++)
		{
			/* Allocate a One Dimentional array of int for each row pointer of Multiplication Array */
			mul_arr[i]=(int*)malloc(col2*sizeof(int));
		}
	/* Multiplication */
	     for(int i=0;i<row1;i++)
		{
			for(int j=0;j<col2;j++)
			{
				int result=0;
				for(int k=0;k<row2;k++)
				{
				result+=arr1[i][j]*arr2[k][j];
				}
				mul_arr[i][j]=result;
			}
		}
	printf("Mul_arr[%d][%d]\n",row1,col2);	
	/*print 2D Array arr_mul */
	for(i=0;i<row1;i++)
	{
	for(j=0;j<col2;j++)
	{
	printf("%d\t",mul_arr[i][j]);
	}
	printf("\n");
	}
	}

}

/*
 ============================================================================
 OutPut:

	enter the number of Rows for Array1:	3
	enter the Number of cloumns of array1:	4
	enter the number of Rows for Array2:	4
	enter the Number of cloumns of array2:	2
	Arr1[3][4]
	2	2	2	2	
	2	2	2	2	
	2	2	2	2	
	Arr2[4][2]
	3	3	
	3	3	
	3	3	
	3	3	
	Mul_arr[3][2]
	24	24	
	24	24	
	24	24	

 ============================================================================
*/










