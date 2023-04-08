#include <iostream>

using namespace std;

int main() {
	long long w;
	cin >> w;

	int w_first_number_from_left = w % 10;
	int w_second_number_from_left = (w / 10) % 10;

	if (w_first_number_from_left + w_second_number_from_left < 10)
	{
		cout << "EFTA7 YA SIMSIM";
	}
	else
	{
		cout << "E2FEL YA SIMSIM";
	}
}