#include <iostream>

using namespace std;

int main() {
	unsigned long long int num_of_days, num_players_per_day[100005];
	cin >> num_of_days;

	for (int i = 0; i < num_of_days; i++)
	{
		cin >> num_players_per_day[i];
	}

	unsigned long long int num_queries, query;
	cin >> num_queries;

	for (int k = 0; k < num_queries; k++)
	{
		cin >> query;
		unsigned long long int sum = 0;
		for (int j = 0; j < num_of_days; j++)
		{
			if ((query - j) == 0)
			{
				break;
			}
			sum += (num_players_per_day[j] * (query - j));
		}
		cout << sum << endl;
	}
}