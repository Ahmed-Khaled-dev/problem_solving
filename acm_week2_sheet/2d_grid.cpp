#include <iostream>

using namespace std;

int main() {
	long long X, Y;
	cin >> X >> Y;

	long long total_sum = 0;
	long long max_x = X - 1;

	for (long long y = 0; y < Y; y++)
	{	
		total_sum = total_sum + (((((max_x + y) * (max_x + y + 1)) / 2)) - ((y-1) * (y)) / 2);
	}

	cout << total_sum;
}