#include <iostream>

using namespace std;

int main() {
	int digits_count, digit;
	int i = 0;
	bool lucky = 0;

	cin >> digits_count;

	while (i < digits_count)
	{
		cin >> digit;
		i++;

		// To avoid checking again for no reason when i already found a lucky number
		if (lucky == 1)
		{
			continue;
			/*for (int c = 0; c < digits_count - i; c++)
			{
				cin >> digit;
			}
			break;*/
		}
		else
		{
			if (digit == 4 || digit == 7)
			{
				lucky = 1;
			}
		}
	}

	if (lucky == 1)
	{
		cout << "It's your lucky day.";
	}
	else
	{
		cout << "Tough luck!";
	}
	return 0;
}