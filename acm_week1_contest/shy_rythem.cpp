#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int n, a, b;
	long long lx, rx, ly, ry;

	cin >> n >> a >> b;
	cin >> lx >> rx >> ly >> ry;

	long long max_x = rx / a;
	long long max_y = ry / b;
	long long min_x = ceil(lx / a);
	long long min_y = ceil(ly / b);

	if (n > max_x + max_y)
	{
		cout << "-1";
	}
	else if (n == max_x + max_y)
	{
		cout << (a * max_x) + (b * max_y);
	}
	else if (n < min_x + min_y)
	{
		cout << "-1";
	}
	else if (n < max_x + max_y)
	{
		long long x_y_n_difference = (max_x + max_y) - n;
		if (b > a)
		{
			long long new_x = max_x - x_y_n_difference;
			cout << (a * new_x) + (b * max_y);
		}
		else if (b < a)
		{
			long long new_y = max_y - x_y_n_difference;
			cout << (a * max_x) + (b * new_y);
		}
		else
		{
			if (max_x > max_y)
			{
				if (x_y_n_difference > rx - lx)
				{
					long long new_x = max_x - x_y_n_difference / 2;
					long long new_y = max_y - x_y_n_difference / 2;
					cout << (a * new_x) + (b * new_y);
				}
				else
				{
					long long new_x = max_x - x_y_n_difference;
					cout << (a * new_x) + (b * max_y);
				}
			}
			else if (max_x <= max_y)
			{
				if (x_y_n_difference > rx - lx)
				{
					long long new_x = max_x - x_y_n_difference / 2;
					long long new_y = max_y - x_y_n_difference / 2;
					cout << (a * new_x) + (b * new_y);
				}
				else
				{
					long long new_x = max_x - (x_y_n_difference / 2);
					long long new_y = max_y - (x_y_n_difference / 2);
					cout << (a * new_x) + (b * new_y);
				}
			}
		}

	}
}