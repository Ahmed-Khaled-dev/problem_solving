#include <iostream>

using namespace std;

int t, n, number;
int main() {
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> n;
		int freq[200005] = {};
		int number_3 = -1;
		for (int j = 0; j < n; j++)
		{
			cin >> number;
			freq[number]++;
			//cout << "Number " << number << " frequency = " << freq[number] << "\n";
			if (freq[number] == 3)
			{
				number_3 = number;
			}
		}
		cout << number_3 << "\n";
	}
}