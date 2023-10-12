#include <iostream>

using namespace std;

char arr[100005] = {};

int main() {	
	int n, j = 0, counter = 0;
	char arr2[20] = {};

	cin >> n >> arr2;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		while (arr2[j] != '\n')
		{
			if (arr[i] == arr2[j])
			{
				counter++;
				break;
			}
			j++;
		}
	}
	cout << counter;
}