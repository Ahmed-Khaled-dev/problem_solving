#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int X1, Y1, R1, X2, Y2, R2;
	cin >> X1 >> Y1 >> R1 >> X2 >> Y2 >> R2;
	
	long double distance_between_both_circles = sqrt(pow(X2 - X1, 2) + pow(Y2 - Y1, 2));

	if (distance_between_both_circles <= R1 + R2)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
	return 0;
}