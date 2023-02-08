#include <iostream>

using namespace std;

int main() {
	// I chose N and R To make them more familiar in permuation
	int n, r;
	long long n_factorial = 1, n_minus_r_factorial = 1;

	cin >> n >> r;

	int n_minus_r = n - r;
	
	// To get n!
	for (int i = n; i > 1; i--)
	{
		n_factorial = n_factorial * i;
	}
	// To get (n-r)!
	for (int c = n_minus_r; c > 1; c--)
	{
		n_minus_r_factorial = n_minus_r_factorial * c;
	}

	// nPr == n! / (n-r)!
	cout << n_factorial / n_minus_r_factorial;

}