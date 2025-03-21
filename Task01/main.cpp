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

	init(matrix, n, m, 2, 9);

	cout << "Matrix: \n" << convert(matrix, n, m) << endl;

	int* array = get_colomns_with_even_elements(matrix, n, m);
	cout << "Column numbers where all elements are even: ";
	for (int i = 0; i < m; i++)
	{
		if (array[i] != 0)
		{
			cout << array[i] << " ";
		}
		
	}

	delete[] array;


	return 0;
}