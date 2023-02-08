#include <iostream>

using namespace std;

int main() {
	int a, b, x;
	cin >> a >> b >> x;

	string output = (a + b > x) ? "Win" : "Lose";
	cout << output;
}