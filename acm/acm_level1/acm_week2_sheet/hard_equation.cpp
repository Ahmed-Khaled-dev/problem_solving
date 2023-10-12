#include <iostream>
#include <cmath>

using namespace std;

int main() {
	long long T, N, possible_solutions = 0;
	cin >> T;

	long long result = 0;
	long long W = 0, X = 0, Y = 0, Z = 0;
	
	long long equation = W + (2 * pow(X, 2)) + (3 * pow(Y, 3)) + (4 * pow(Z, 4));

	for (int i = 0; i < T; i++)
	{
		cin >> N;
		while (true)
		{
			if (equation > N)
			{
				break;
			}
			else if (equation == N)
			{
				possible_solutions++;
			}
			else
			{
				W++;
			}
		}
		cout << possible_solutions;
	}
}