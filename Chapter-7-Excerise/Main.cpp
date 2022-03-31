#include <iostream>

using namespace std;

int NumPaths(int row, int col, int n);

int main()
{
	cout << NumPaths(2, 2, 2);
	return 0;
}

// Part A
int NumPaths(int row, int col, int n)
{
	if (row == n)
		return 1;
	else
		if (col == n)
			return 1;
		else
			return NumPaths(row + 1, col, n) + NumPaths(row, col + 1, n);
}