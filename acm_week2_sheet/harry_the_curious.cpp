#include <iostream>

using namespace std;

int main() {
	int l, r, n;
	cin >> l >> r >> n;
	bool found_prime_divisor = 0;
	for (int i = l; i <= r; i++)
	{
		bool prime = 1;
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				prime = 0;
				break;
			}
		}
		if (prime && i != 1 && i != n)
		{
			if (n % i == 0)
			{
				cout << i << " ";
				if (found_prime_divisor == 0)
				{
					found_prime_divisor = 1;
				}
			}
		}
	}
	if (found_prime_divisor == 0)
	{
		cout << -1;
	}
}