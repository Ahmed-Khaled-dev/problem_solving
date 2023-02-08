#include <iostream>

using namespace std;

int main() {
	long long x, y;
	cin >> x >> y;

	if (x == 2 * y)
	{
		cout << "YES";
	}
	else if (y == 2 * x)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
}