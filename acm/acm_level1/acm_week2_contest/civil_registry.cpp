#include <iostream>

using namespace std;

int main() {
	long long N;
	cin >> N;

	if (N == 1)
	{
		cout << 26 << endl;
		for (char i = 'a'; i <= 'z'; i++)
		{
			cout << i << endl;
		}
	}
	else if (N == 2)
	{
		cout << 676 << endl;
		for (char i = 'a'; i <= 'z'; i++)
		{
			for (char j = 'a'; j <= 'z'; j++)
			{
				cout << i;
				cout << j << endl;
			}
		}
	}
	else if (N == 3)
	{
		cout << 17576 << endl;
		for (char i = 'a'; i <= 'z'; i++)
		{
			for (char j = 'a'; j <= 'z'; j++)
			{
				for (char k = 'a'; k <= 'z'; k++)
				{
					cout << i;
					cout << j;
					cout << k << endl;
				}

			}
		}
	}
	else
	{
		cout << 456976 << endl;
		for (char i = 'a'; i <= 'z'; i++)
		{
			for (char j = 'a'; j <= 'z'; j++)
			{
				for (char k = 'a'; k <= 'z'; k++)
				{
					for (char l = 'a'; l <= 'z'; l++)
					{
						cout << i;
						cout << j;
						cout << k;
						cout << l << endl;
					}
				}

			}
		}
	}
}