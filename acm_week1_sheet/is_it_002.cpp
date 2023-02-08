#include <iostream>

using namespace std;

int main() {
	int A, B, R;
	char S, E;

	cin >> A >> S >> B >> E >> R;

	if (S == '+')
	{
		if (A + B == R)
		{
			cout << "Yes";
		}
		else
		{
			cout << A + B;
		}
	}
	else if (S == '-')
	{
		if (A - B == R)
		{
			cout << "Yes";
		}
		else
		{
			cout << A - B;
		}
	}
	else
	{
		if (A * B == R)
		{
			cout << "Yes";
		}
		else
		{
			cout << A * B;
		}
	}
}