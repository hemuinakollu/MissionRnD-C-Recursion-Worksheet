#include<stdlib.h>

void sp_helpero(int rows, int columns, int **input_array, int *arr, int *i, int r, int c)
{
	if (r > rows / 2)
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
	else
	{
		int *arr = (int*)malloc(1000);
		int i = 0;
		if (rows % 2 != 0)
			sp_helpero(rows, columns, input_array, arr, &i, 0, 0);
		else
			sp_helpere(rows, columns, input_array, arr, &i, 0, 0);
		return arr;


	}

}