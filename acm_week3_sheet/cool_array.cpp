#include <iostream>

using namespace std;

int main() {
	int n, sum = 0;
	long long arr[100005] = {};
	cin >> n;
	bool is_cool = 1;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		sum += arr[i];
	}
	for (int j = 0; j < n; j++)
	{
		if (sum % arr[j] != 0)
		{
			is_cool = 0;
			break;
		}
	}

	if (is_cool)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
}