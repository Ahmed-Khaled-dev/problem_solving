#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int A, B, C;
	cin >> A >> B >> C;
	
	if (A > B && A > C)
	{
		if (pow(A, 2) == pow(B, 2) + pow(C, 2))
		{
			cout << "YES";
			return 0;
		}
	}
	else if (B > A && B > C)
	{
		if (pow(B, 2) == pow(A, 2) + pow(C, 2))
		{
			cout << "YES";
			return 0;
		}
	}
	else if (C > A && C > B)
	{
		if (pow(C, 2) == pow(A, 2) + pow(B, 2))
		{
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
}