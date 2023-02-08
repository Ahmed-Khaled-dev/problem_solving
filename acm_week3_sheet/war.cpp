#include <iostream>

using namespace std;

int main() {
	int n, arr[10005];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++)
	{
		int kills = 0;
		for (int j = 0; j < n; j++)
		{
			if (arr[i] > arr[j])
			{
				kills++;
			}
		}
		cout << kills << " ";
	}
}