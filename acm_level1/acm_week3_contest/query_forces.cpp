#include <iostream>

using namespace std;


long long arr[1000][1000] = {};

int main() {
	int total_rows, total_columns;
	unsigned int q, i, j;
	long long max_value = 0, x;
	int row, column;
	char q_type;
	cin >> total_rows >> total_columns;
	cin >> q;

	for (int k = 0; k < q; k++)
	{
		cin >> q_type;
		if (q_type == 'R')
		{
			cin >> row >> i >> j >> x;
			while (i <= j)
			{
				arr[row][i] += x;
				if (arr[row][i] > max_value)
				{
					max_value = arr[row][i];
				}
				i++;
			}
		}
		else
		{
			cin >> column >> i >> j >> x;
			while (i <= j)
			{
				arr[i][column] += x;
				if (arr[i][column] > max_value)
				{
					max_value = arr[i][column];
				}
				i++;
			}
		}
	}
	cout << max_value;
}
