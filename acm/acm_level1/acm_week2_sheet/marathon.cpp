#include <iostream>

using namespace std;

int main() {
	int num_test_cases, a, b, c, d;
	cin >> num_test_cases;

	for (int i = 0; i < num_test_cases; i++)
	{
		int num_participants_infront = 0;
		cin >> a >> b >> c >> d;
		if (b > a)
		{
			num_participants_infront++;
		}
		if (c > a)
		{
			num_participants_infront++;
		}
		if (d > a)
		{
			num_participants_infront++;
		}
		cout << num_participants_infront << endl;
	}
}