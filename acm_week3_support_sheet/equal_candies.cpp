#include <iostream>
#include <algorithm>

using namespace std;

void fast() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

int main() {
	fast();

	int t, b, candies[55] = {};

	cin >> t;
	for (int i = 0; i < t; i++)
	{	
		cin >> b;
		for (int j = 0; j < b; j++)
		{
			cin >> candies[j];
		}
		sort(candies, candies + b);
		
		long long sum = 0;

		for (int k = 1; k < b; k++)
		{
			sum += (long long) candies[k] - candies[0];
		}
		cout << sum << "\n";
	}
}