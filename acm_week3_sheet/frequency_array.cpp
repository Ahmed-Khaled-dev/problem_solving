#include <iostream>

using namespace std;

int main() {
	int arr[105] = {}, arr2[105] = {};
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	for (int j = 0; j < n; j++)
	{
		arr2[arr[j]]++;
	}

	for (int k = 0; k < n; k++)
	{
		cout << "Frequency of " << arr[k] << "= " << arr2[k];
	}
}