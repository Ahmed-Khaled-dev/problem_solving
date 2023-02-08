#include <iostream>

using namespace std;

int main() {
	int n;
	char arr[1005] = {};
	cin >> n;
	bool is_lucky = 1;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++)
	{
		if (arr[i] != '3' && arr[i] != '6' && arr[i] != '9')
		{
			is_lucky = 0;
			break;
		}
	}

	if (is_lucky && arr[n - 1] == '6')
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
}