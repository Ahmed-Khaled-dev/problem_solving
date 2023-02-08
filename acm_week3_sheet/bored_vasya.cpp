#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n, m, arr[1005], divisible_count = 0, divisibles[1005] = {}, j = 0;
	cin >> n >> m;

	for (int i = 0; i < m; i++)
	{
		cin >> arr[i];
		if (arr[i] % n == 0)
		{
			divisible_count++;
			divisibles[j] = i + 1;
			j++;
		}
	}

	cout << divisible_count << endl;
	reverse(divisibles, divisibles + divisible_count);
	for (int k = 0; k < divisible_count; k++)
	{
		cout << divisibles[k] << " ";
	}
}