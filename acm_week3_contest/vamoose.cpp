#include <iostream>

using namespace std;

int main() {
	int N, X, arr[100005];
	unsigned long long sum = 0;
	cin >> N >> X;
	bool is_cool = 1;

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
		sum += arr[i];
	}

	int j = 0;
	for (int i = 1; i < N; i++)
	{
		if ((arr[i] + arr[j]) % X != 0)
		{
			is_cool = 0;
		}
		j++;
	}

	if (sum % X == 0 && is_cool)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
}