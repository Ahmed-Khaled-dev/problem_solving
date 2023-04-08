#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int T;
	cin >> T;

	for (int i = 1; i <= T; i++)
	{
		long long number_of_integers_in_test;
		cin >> number_of_integers_in_test;

		long long integer;
		long long integers_as_a_number = 0;
		long long c = number_of_integers_in_test;

		while (c > 0)
		{
			cin >> integer;
			integers_as_a_number = integers_as_a_number + integer * (long long)pow(10, c - 1);
			c--;
		}

		cout << integers_as_a_number;
		long long sum_digit = 0;
		long long odd_number = 0;
		long long integer_as_a_number2 = integers_as_a_number;
		long long integer_as_a_number3 = integers_as_a_number;

		for (long long j = 0; j < number_of_integers_in_test; j++)
		{
			long long digit = integer_as_a_number2 % 10;
			cout << "\n" << "The current digit is:" << digit << "\n";
			for (long long k = 1; k <= number_of_integers_in_test; k++)
			{	
				long long other_digit = integer_as_a_number3 % 10;
				cout << "\n" << "The current other digit is:" << other_digit << "\n";
				if (digit == other_digit)
				{
					sum_digit++;
				}
				integer_as_a_number3 /= 10;
			}
			if (sum_digit % 2 != 0)
			{
				cout << "odd digit is :" << digit << endl;
				odd_number = digit;
			}
			integer_as_a_number3 = integers_as_a_number;
			integer_as_a_number2 /= 10;
			sum_digit = 0;
		}
		cout << odd_number << endl;
		odd_number = 0;
	}
}