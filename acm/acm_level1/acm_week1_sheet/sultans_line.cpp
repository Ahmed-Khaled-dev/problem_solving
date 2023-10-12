#include <iostream>

using namespace std;

int main() {
	double X1, Y1, X2, Y2, X3, Y3;
	cin >> X1 >> Y1 >> X2 >> Y2 >> X3 >> Y3;

	// We can draw any line between 2 points, so if 2 points or the 3 are exactly on top of each other
	// then we indeed can draw a line that passed through them
    if ((X1 == X2 && Y1 == Y2) || (X1 == X3 && Y1 == Y3) || (X2 == X3 && Y2 == Y3))
	{
		cout << "Yes";
	}
	// The case the slope is undefined
	else if (X1 == X2 && X3 == X2 && X3 == X1)
	{
		cout << "Yes";
	}
	else
	{
		double slope_1 = (Y2 - Y1) / (X2 - X1);
		double slope_2 = (Y3 - Y2) / (X3 - X2);
		double slope_3 = (Y3 - Y1) / (X3 - X1);

		if (slope_1 == slope_2 && slope_2 == slope_3 && slope_1 == slope_3)
		{
			cout << "Yes";
		}
		else
		{
			cout << "No";
		}
	}

}