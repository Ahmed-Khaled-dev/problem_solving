#include <iostream>

using namespace std;

int main() {
	int n, players_levels[105], p, q, number_q, players_levels_counter = 0;
	cin >> n;
	
	cin >> p;	
	for (int i = 0; i < p; i++)
	{
		cin >> players_levels[i];
		players_levels_counter++;
	}

	cin >> q;
	for (int i = 0; i < q; i++)
	{
		cin >> number_q;
		bool same_level = 0;
		for (int i = 0; i < p; i++)
		{
			if (players_levels[i] == number_q)
			{
				same_level = 1;
				break;
			}
		}

		if (!same_level)
		{
			players_levels_counter++;
		}
	}

	if (players_levels_counter == n)
	{
		cout << "I become the guy.";
	}
	else
	{
		cout << "Oh, my keyboard!";
	}
}