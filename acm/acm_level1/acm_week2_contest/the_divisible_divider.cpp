#include <iostream>

using namespace std;

int main() {
	int A, B;
	cin >> A >> B;
	bool found = 0;
	for (int i = A + 1; i < B; i++)
	{
		if (i % A == 0 && B % i == 0)
		{
			cout << i << ' ';
			found = 1;
		}
	}
	if (!found)
	{
		cout << -1;
	}
}
