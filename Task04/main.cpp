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

	init(matrix, n, m, 0, 9);

	cout << "Matrix: \n" << convert(matrix, n, m) << endl;

	cout << "Number of colomn with min product: " << get_colomn_with_min_product(matrix, n, m);

	return 0;

}