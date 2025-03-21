#include "util.h"
#include <cmath>


bool is_all_odd_in_raw(int** matrix, int m, int index)
{
	for (int j = 0; j < m; j++)
	{
		if (matrix[index][j] % 2 == 0)
		{
			return false;
		}

	}

	return true;

}
int get_raw_with_max_sum(int** matrix, int n, int m)
{
	
	int maxSum = INT_MIN;
	int maxIndex = 0;

	for (int i = 0; i < n; i++)
	{
		if (is_all_odd_in_raw(matrix, m, i))
		{
			int rowSum = 0;
			for (int j = 0; j < m; j++)
			{				
				rowSum += abs(matrix[i][j]);
			}		

			if (rowSum > maxSum)
			{
				maxSum = rowSum;
				maxIndex = (i + 1);
			}

		}
	}


	return maxIndex;

}