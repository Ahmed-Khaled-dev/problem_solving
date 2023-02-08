#include <iostream>

using namespace std;

int main() {
	int T;
	long long n;
	cin >> T;
	long long before_previous_number = 1, previous_number = 2;

	for (long long i = 0; i < T; i++)
	{
		cin >> n;

		bool found = 0;
		for (long long j = 1; j <= n; j++)
		{
			if (j == 1 || j == 2)
			{
				if (n == 3 || n == 4 || n == 5 || n == 6)
				{
					found = 1;
					break;
				}
			}
			else if (j == previous_number + before_previous_number)
			{
				if ((j + previous_number + before_previous_number) == n)
				{
					found = 1;
					break;
				}
				else if ((j + previous_number + before_previous_number) > n)
				{
					break;
				}
				else
				{
					if ((j + (2 * previous_number)) == n)
					{
						found = 1;
						break;
					}
					else if ((j + (2 * previous_number)) > n)
					{
						break;
					}
					else
					{
						if ((3 * j) == n)
						{
							found = 1;
							break;
						}
						else if ((3 * j) > n)
						{
							break;
						}
					}
				}
				before_previous_number = previous_number;
				previous_number = j;
			}
		}
		if (found)
		{
			cout << "Yes" << endl;
		}
		else
		{
			cout << "No" << endl;
		}
	}
}