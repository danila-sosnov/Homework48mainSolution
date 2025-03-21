#include "util.h"


int main()
{
	int n;
	int m;
	int** matrix;

	cout << "Input size of matrix (n and m): ";
	cin >> n >> m;

	matrix = new int* [n];

	for (int i = 0; i < n; i++)
	{
		matrix[i] = new int[m];
	}

	init(matrix, n, m, -9, 9);

	cout << "Matrix: \n" << convert(matrix, n, m) << endl;

	int* array = get_colomns_with_negative_element_on_main_diagonale(matrix, n, m);
	cout << "Colomn numbers with negative element on the main diagonale: ";

	for (int i = 0; i < m; i++)
	{
		if (array[i] != 0)
		{
			cout << array[i] << " ";
		}
	}
	cout << endl;

	delete[] array;

	array = sum_colomn_elements_with_negative_element_on_main_diagonale(matrix, n, m);
	cout << "Sum of colomn elements: " ;

	for (int i = 0; i < m; i++)
	{
		if (array[i] != 0)
		{
			cout << array[i] << " ";
		}
	}

	delete[] array;
	



}