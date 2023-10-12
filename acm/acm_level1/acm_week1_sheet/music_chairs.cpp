#include <iostream>

using namespace std;

int main() {
	unsigned long long N, M, X;
	cin >> N >> M >> X;

	if (M % 2 != 0)
	{
		M = M + 1;
	}

	if (N == 1)
	{
		cout << 1;
	}
	else
	{
		if ((M + X) % N == 0)
		{
			cout << N;
		}
		else
		{
			cout << (M + X) % N;
		}	
	}
}