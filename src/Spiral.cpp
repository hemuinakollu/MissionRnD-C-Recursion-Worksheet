/*
Write a program to generate elements of a matrix in spiral order.
Store the generated elements in single dimensional array and return that array.

Directions for Spiral are : Go Right ,Go Down ,Go Left, Go Up
Ex:

Matrix:
1	2	3
4	5	6
7	8	9

Spiral order:
1	2	3	6	9	8	7	4	5

Given matrix is a two dimensional array(input_array) with dimensions rows, columns.
If rows, columns are invalid then return NULL.
If input_array is NULL then return NULL.

Example Input :
int board[2][3]={
{4,6,7},
{1,3,8}
};
spiral(2,2,(int **)board); // Rows followed by columns followed by board

Example Output : Return an array consisting of {4,6,7,8,3,1};

Note : Check the function Parameters ,Its a double pointer .

*/

#include "stdafx.h"
#include<stdlib.h>

void sp_helpero(int rows, int columns, int **input_array, int *arr, int *i, int r, int c)
{
	if (r > (rows / 2))
		return;
	else
	{
		for (int j = r; j < columns - c; j++)
		{
			arr[(*i)] = input_array[r][j];
			(*i)++;
		}

		for (int j = r + 1; j < rows - r; j++)
		{
			arr[(*i)] = input_array[j][columns - c - 1];
			(*i)++;
		}
		for (int j = columns - c - 2; j >= c; j--)
		{
			arr[(*i)] = input_array[rows - r - 1][j];
			(*i)++;
		}
		for (int j = rows - r - 2; j > r; j--)
		{
			arr[(*i)] = input_array[j][r];
			(*i)++;
		}



		sp_helpero(rows, columns, input_array, arr, i, r + 1, c + 1);
	}

}
void sp_helpere(int rows, int columns, int **input_array, int *arr, int *i, int r, int c)
{
	if (r > ((rows / 2) - 1))
		return;
	else
	{
		for (int j = c; j < columns - c; j++)
		{
			arr[*i] = input_array[r][j];
			(*i)++;
		}

		for (int j = r + 1; j < rows - r; j++)
		{
			arr[(*i)] = input_array[j][columns - c - 1];
			(*i)++;
		}
		for (int j = columns - c - 2; j >= c; j--)
		{
			arr[(*i)] = input_array[rows - r - 1][j];
			(*i)++;
		}
		for (int j = rows - r - 2; j > r; j--)
		{
			arr[(*i)] = input_array[j][r];
			(*i)++;
		}



		sp_helpere(rows, columns, input_array, arr, i, r + 1, c + 1);
	}
}
int *spiral(int rows, int columns, int **input_array)
{
	if (rows <= 0 || columns <= 0 || input_array == NULL)
		return NULL;
	/*else
	{
		int *arr = (int*)malloc(rows*columns);
		int i = 0;
		if (rows % 2 != 0)
			sp_helpero(rows, columns, input_array, arr, &i, 0, 0);
		else
			sp_helpere(rows, columns, input_array, arr, &i, 0, 0);
		return arr;


	}*/

}




