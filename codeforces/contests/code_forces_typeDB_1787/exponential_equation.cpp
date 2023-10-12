#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int t;
	long long n;
	
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		//bool found = 0;
		cin >> n;

		if (((double)n / 2) == ((int)n / 2))
		{
			cout << 1 << " " << n / 2 << endl;
			continue;
		}
		else
		{
			cout << -1 << endl;
		}
	}

	//unsigned long long int result;
	/*for (int x = 2; x < 100; x++)
	{
		for (int y = x; y < 100; y++)
		{
			result = (pow(x, y) * y) + (pow(y, x) * x);
			if (result == n)
			{
				found = 1;
				cout << x << " " << y << endl;
				break;
			}
		}
		if (found)
		{
			break;
		}
	}
	if (!found)
	{
		cout << -1 << endl;
	}*/
}