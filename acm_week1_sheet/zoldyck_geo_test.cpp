#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int circle_radius;
	int sqaure_side_length;
	cin >> circle_radius >> sqaure_side_length;

	double squaure_diameter = sqrt(pow(sqaure_side_length, 2) + pow(sqaure_side_length, 2));

	if ((squaure_diameter / 2) > circle_radius && (sqaure_side_length / 2) >= circle_radius)
	{
		cout << "Square";
	}
	else if ((squaure_diameter / 2) <= circle_radius && (sqaure_side_length / 2) < circle_radius)
	{
		cout << "Circle";
	}
	else 
	{
		cout << "Complex";
	}
}