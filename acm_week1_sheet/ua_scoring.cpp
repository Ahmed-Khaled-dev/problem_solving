#include <iostream>

using namespace std;

int main() {
	long long number_of_tasks;
	cin >> number_of_tasks;
	
	long long highest_grade = number_of_tasks * (number_of_tasks + 1);

	cout << highest_grade;
}