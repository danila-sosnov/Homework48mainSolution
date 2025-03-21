bool is_colomn_with_negative_element_on_main_diagonale(int** matrix, int n, int index)
{
	for (int i = 0; i < n; i++)
	{
		if (matrix[i][index] < 0 && i == index)
		{
			return true;
		}
	}
	return false;
}

int* get_colomns_with_negative_element_on_main_diagonale(int** matrix, int n, int m)
{
	int* negColumns = new int[m] {};

	for (int j = 0; j < m; j++)
	{
		if (is_colomn_with_negative_element_on_main_diagonale(matrix, n, j))
		{
			negColumns[j] += (j + 1);
		}
	}


	return negColumns;

}

int* sum_colomn_elements_with_negative_element_on_main_diagonale(int** matrix, int n, int m)
{
	int* sums = new int[m] {};
	int sum = 0;

	for (int j = 0; j < m; j++)
	{
		if (is_colomn_with_negative_element_on_main_diagonale(matrix, n, j))
		{
			sum = 0;
			for (int i = 0; i < n; i++)
			{
				sum += matrix[i][j];
								
			}
			sums[j] += sum;

			
		}
		
	}

	
	return sums;
}