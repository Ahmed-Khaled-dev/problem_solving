#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int n;
	cin >> n;

	// Checking if log2(n) is a whole number
	if (ceil(log2(n)) == floor(log2(n)))
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
}