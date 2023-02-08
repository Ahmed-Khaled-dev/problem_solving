#include <iostream>
#include <cmath>

using namespace std;

int main() {
	unsigned long long int n, m;
	long long mod = pow(10, 9) + 7;
	cin >> n >> m;
	if ((n > 2 * pow(10, 9) && m > pow(10, 9)) || (n > pow(10, 9) && m > 2 * pow(10, 9)))
	{
		cout << "PRODUCT";
	}
	else if ((n * m) < (n + m))
	{
		cout << "SUM";
	}
	else if (n * m == n + m)
	{
		cout << "DRAW";
	}
	else if (n * m > n + m)
	{
		cout << "PRODUCT";
	}
}