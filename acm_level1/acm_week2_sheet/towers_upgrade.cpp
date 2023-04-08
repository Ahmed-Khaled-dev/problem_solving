#include <iostream>
#include <cmath>

using namespace std;

int main() {
	long long a, b, c, a_upgrade = 1, b_upgrade = 1, c_upgrade = 1;
	cin >> a >> b >> c;
	long long module_value = pow(10, 9) + 7;

	// a^b % (10^9 + 7)
	for (long long i = 0; i < b; i++)
	{
		// (a_upgrade * a) % (10^9 +7)
		a_upgrade = ((a_upgrade % module_value) * (a % module_value)) % module_value;
		//a_upgrade = a_upgrade * a;
	}
	for (long long j = 0; j < a; j++)
	{
		// (b_upgrade * b) % (10^9 +7)
		b_upgrade = ((b_upgrade % module_value) * (b % module_value)) % module_value;
		//b_upgrade = b_upgrade * b;
	}
	for (long long k = 0; k < abs(a - b); k++)
	{
		// ((c_upgrade * c) % (10^9 +7))
		c_upgrade = ((c_upgrade % module_value) * (c % module_value)) % module_value;
		//c_upgrade = c_upgrade * c;
	}

	if (a_upgrade >= b_upgrade && b_upgrade >= c_upgrade)
	{
		cout << c_upgrade << ' ' << b_upgrade << ' ' << a_upgrade;
	}
	else if (a_upgrade >= c_upgrade && c_upgrade >= b_upgrade)
	{
		cout << b_upgrade << ' ' << c_upgrade << ' ' << a_upgrade;
	}
	else if (b_upgrade >= a_upgrade && a_upgrade >= c_upgrade)
	{
		cout << c_upgrade << ' ' << a_upgrade << ' ' << b_upgrade;
	}
	else if (b_upgrade >= c_upgrade && c_upgrade >= a_upgrade)
	{
		cout << a_upgrade << ' ' << c_upgrade << ' ' << b_upgrade;
	}
	else if (c_upgrade >= a_upgrade && a_upgrade >= b_upgrade)
	{
		cout << b_upgrade << ' ' << a_upgrade << ' ' << c_upgrade;
	}
	else if (c_upgrade >= b_upgrade && b_upgrade >= a_upgrade)
	{
		cout << a_upgrade << ' ' << b_upgrade << ' ' << c_upgrade;
	}
}