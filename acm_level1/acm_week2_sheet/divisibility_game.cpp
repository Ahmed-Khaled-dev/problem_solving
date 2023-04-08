#include <iostream>

using namespace std;

int main() {
	int divisor, plate_number;
	long long aabas_score = 0, sultan_score = 0;
	cin >> divisor;

	for (int i = 0; i < 5; i++)
	{
		cin >> plate_number;
		if (plate_number % divisor == 0)
		{
			aabas_score = aabas_score + plate_number;
		}
		else
		{
			sultan_score = sultan_score + plate_number;
		}
	}
	if (aabas_score > sultan_score)
	{
		cout << "3abas";
	}
	else if (aabas_score < sultan_score)
	{
		cout << "Sultan";
	}
	else
	{
		cout << "TIE";
	}
}