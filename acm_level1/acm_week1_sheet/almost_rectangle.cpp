#include <iostream>
#include <iomanip>
// Input/Output Manipulators

using namespace std;

int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	// I Multiplied the whole equation by 2 to get rid of the half in the imaginary triangle which has an area of 1/2*(b-d)*(a-c)
	int double_area = (2 * a * d) + (2 * c * (b - d)) + ((b - d) * (a - c));

	// The i divide the area here by 2 to get the real area since i multiplied it by 2 in the previous line
	cout << fixed << setprecision(6) << double_area / 2.0;
}