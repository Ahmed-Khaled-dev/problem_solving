#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main() {
	long long l, r, max;
	cin >> l >> r;

	if (l >= 0 && r >= 0)
	{
		cout << l * l << "\n" << r * r;
	}
	else if (l <= 0 && r <= 0)
	{
		cout << r * r << "\n" << l * l;
	}
	else
	{
		if (abs(l) >= r)
		{
			max = l * l;
			cout << l * r << "\n" << max;
		}
		else
		{
			max = r * r;
			cout << l * r << "\n" << max;
		}
	}
}