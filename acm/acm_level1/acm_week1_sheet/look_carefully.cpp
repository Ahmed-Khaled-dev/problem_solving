#include <iostream>

using namespace std;

int main() {
	char word_first_letter_upper = 'C';
	char word_second_letter_lower = 'h';
	char word_third_letter_lower = 'i';
	
	char letter_guess;
	cin >> letter_guess;

	if (letter_guess == word_first_letter_upper || letter_guess == word_second_letter_lower || letter_guess == word_third_letter_lower)
	{
		cout << "Yes";
	}
	else {
		cout << "No";
	}
}