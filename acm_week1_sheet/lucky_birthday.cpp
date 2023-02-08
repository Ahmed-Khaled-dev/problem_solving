#include <iostream>

using namespace std;

int main() {
	int year_born_in;
	int current_age;

	cin >> year_born_in >> current_age;
	
	int current_year = year_born_in + current_age;

	if (current_year % 4 == 0)
	{
		if (current_year % 100 == 0)
		{
			if (current_year % 400 == 0) 
			{
				cout << "Yes";
			}
			else
			{
				cout << "No";
			}
		}
		else 
		{
			cout << "Yes";
		}
	}
	else
	{
		cout << "No";
	}
}