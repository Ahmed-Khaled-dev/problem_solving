#include <iostream>

using namespace std;

int main() {
	long long arr[15], x;
	int n = 10;
	bool found = 0;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	cin >> x;

	for (int i = 0; i < n; i++)
	{
		if (arr[i] == x)
		{
			found = 1;
			break;
		}
	}

	if (found)
	{
		cout << "Found";
	}
	else
	{
		cout << "Not Found";
	}
}