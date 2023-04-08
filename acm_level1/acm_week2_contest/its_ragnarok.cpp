#include <iostream>

using namespace std;

int main() {
	int N, X, Y, Z, P, X_hits, Y_hits, Z_hits;
	cin >> N >> X >> Y >> Z;

	for (int i = 1; i <= N; i++)
	{
		cin >> P;
		int X_total_damage = X, Y_total_damage = Y, Z_total_damage = Z;
		X_hits = 1;
		Y_hits = 1;
		Z_hits = 1;
		while (X_total_damage < P)
		{
			X_total_damage += X;
			X_hits++;
		}
		while (Y_total_damage < P)
		{
			Y_total_damage += Y;
			Y_hits++;
		}
		while (Z_total_damage < P)
		{
			Z_total_damage += Z;
			Z_hits++;
		}
		cout << "Leviathan Axe: " << X_hits << endl << "Blades of Chaos: " << Y_hits << endl << "Talon Bow: " << Z_hits << endl;
		cout << min(min(X_hits, Y_hits), Z_hits) << " " << max(max(X_hits, Y_hits), Z_hits) << endl;

		bool found = 0;
		for (int j = 0; j <= X_hits; j++)
		{
			for (int k = 0; k <= Y_hits; k++)
			{
				for (int l = 0; l <= Z_hits; l++)
				{
					if (((j * X) + (k * Y) + (l * Z)) == P)
					{
						cout << j << " " << k << " " << l << endl;
						found = 1;
					}
				}
			}
		}
		if (!found)
		{
			cout << "No Combo!" << endl;
		}
	}
}