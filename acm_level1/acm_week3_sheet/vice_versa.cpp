#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n;
	bool is_palindrome = 1;
	char arr[1005] = {};
	char reversed_arr[1005] = {};
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		reversed_arr[i] = arr[i];
	}
	reverse(reversed_arr, reversed_arr + n);
	
	for (int i = 0; i < n; i++)
	{
		cout << reversed_arr[i];
	}

	for (int i = 0; i < n; i++)
	{
		if (arr[i] != reversed_arr[i])
		{
			is_palindrome  = 0;
			break;
		}
	}

	if (is_palindrome)
	{
		cout << "\n" << "YES";
	}
	else
	{
		cout << "\n" << "NO";
	}
}