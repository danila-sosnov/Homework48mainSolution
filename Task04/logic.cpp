#include "util.h"
#include <cmath>


bool is_less_than_N_in_raw(int** matrix, int n, int index)
{
	for (int i = 0; i < n; i++)
	{
		if (matrix[i][index] > n)
		{
			return false;
		}

	}

	return true;

}
int get_colomn_with_min_product(int** matrix, int n, int m)
{

	int minProduct = INT_MAX;
	int minIndex = 0;

	for (int j = 0; j < m; j++)
	{
		if (is_less_than_N_in_raw(matrix, n, j))
		{
			int colomnProduct = 1;
			for (int i = 0; i < n; i++)
			{
				colomnProduct *= matrix[i][j];
			}

			if (colomnProduct < minProduct)
			{
				minProduct = colomnProduct;
				minIndex = (j + 1);
			}

		}
	}


	return minIndex;

}