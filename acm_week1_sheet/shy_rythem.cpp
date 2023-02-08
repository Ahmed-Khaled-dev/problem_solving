#include <iostream>

using namespace std;

int main() {
	int n, a, b;
	long double lx, rx, ly, ry;
	
	cin >> n >> a >> b;
	cin >> lx >> rx >> ly >> ry;

	long long max_x = rx/a;
	long long max_y = ry/b;

	if (n > max_x + max_y)
	{
		cout << "-1";
	}
	else if (n == max_x + max_y)
	{
		cout << (a * max_x) + (b * max_y);
	}
	else if (n < max_x + max_y)
	{
		long double x_y_n_difference = (max_x + max_y) - n;
		if (b > a)
		{
			long double new_x = max_x - x_y_n_difference;
			cout << (a * new_x) + (b * max_y);
		}
		else if (b < a)
		{
			long double new_y = max_y - x_y_n_difference;
			cout << (a * max_x) + (b * new_y);
		}
		else
		{
			if (max_x > max_y)
			{
				if (x_y_n_difference > rx - lx)
				{
					long double new_x = max_x - x_y_n_difference / 2.0;
					long double new_y = max_y - x_y_n_difference / 2.0;
					cout << (a * new_x) + (b * new_y);
				}
				else
				{
					long double new_x = max_x - x_y_n_difference;
					cout << (a * new_x) + (b * max_y);
				}
			}
			else if (max_x <= max_y)
			{
				if (x_y_n_difference > rx - lx)
				{
					long double new_x = max_x - x_y_n_difference / 2.0;
					long double new_y = max_y - x_y_n_difference / 2.0;
					cout << (a * new_x) + (b * new_y);
				}
				else
				{
					long double new_x = max_x - (x_y_n_difference / 2.0);
					long double new_y = max_y - (x_y_n_difference / 2.0);
					cout << (a * new_x) + (b * new_y);
				}
			}
		}

	}
}