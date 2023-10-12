#include <iostream>
#include <sstream>

using namespace std;

long long reverse(long long number) {
	long long reverse_number = 0;
	int next_digit;
	while (number != 0)
	{
		next_digit = number % 10;
		reverse_number = reverse_number * 10 + next_digit;
		number = number / 10;
	}
	return reverse_number;
}

int sum(long long number) {
	long long total_sum = 0;
	long long next_digit;
	while (number != 0)
	{
		next_digit = number % 10;
		total_sum += next_digit;
		number = number / 10;
	}
	return total_sum;
}

int main() {
	long long ID;
	cin >> ID;
	
	int ID_sum = sum(ID);
	long long ID_reversed = reverse(ID);

	if (ID == ID_reversed && ID % ID_sum == 0)
	{
		cout << "Best mentor.";
	}
	else if (ID == ID_reversed || ID % ID_sum == 0)
	{
		cout << "He's good.";
	}
	else
	{
		cout << "He'll be fired.";
	}
	return 0;
}

