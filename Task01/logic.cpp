#include "util.h"


bool is_all_even_in_colomn(int** matrix, int n,int index)
{
	for (int i = 0; i < n; i++)
	{
		if (matrix[i][index] % 2 == 1)
		{
			return false;
		}

	}

	return true;

}
int* get_colomns_with_even_elements(int** matrix, int n, int m)
{
	int* evenColumns = new int[m] {};

	for (int j = 0; j < m; j++)
	{
		if (is_all_even_in_colomn(matrix,n,j))
		{
			evenColumns[j] += (j + 1);
		}
	}


	return evenColumns;

}