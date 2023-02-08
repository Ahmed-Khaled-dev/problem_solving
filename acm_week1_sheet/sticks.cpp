#include <iostream>

using namespace std;

int main() {
	long long x, y, z;
	cin >> x >> y >> z;

	if (x < y + z && x > abs(y - z))
	{
		cout << "YES";
	}
	else {
		cout << "NO";
	}
}