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

	cout << "Row with max sum: " << get_raw_with_max_sum(matrix, n, m);

	



	return 0;

}