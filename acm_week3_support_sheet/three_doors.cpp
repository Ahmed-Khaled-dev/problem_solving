#include <iostream>

using namespace std;

void fast() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

int arr[4];
int main() {
	fast();

	int t, x;
	cin >> t;

	// {2 , 3 , 0}
	for (int i = 0; i < t; i++)
	{
		cin >> x;
		cin >> arr[0];
		cin >> arr[1];
		cin >> arr[2];

		if (arr[x-1] == 0)
		{
			cout << "NO" << "\n";
		}
		else
		{
			if (arr[arr[x-1] - 1] == 0)
			{
				cout << "NO" << "\n";
			}
			else
			{
				cout << "Yes" << "\n";
			}
		}
	}
}