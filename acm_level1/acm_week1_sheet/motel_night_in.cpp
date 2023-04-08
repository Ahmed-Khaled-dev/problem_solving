#include <iostream>

using namespace std;

int main(){
	int D, S;
	cin >> D >> S;
	
	// Multiplied the whole original equation (S >= (2/3 * D)) by 3 to remove the fraction
	if (3*S >= (2*D))
	{
		cout << "Sunny Day";
	}
	// Multiplied the whole original equation (S <= (1/3 * D)) by 3 to remove the fraction
	else if (3*S <= D)
	{
		cout << "Rainy Day";
	}
	else
	{
		cout << "Cloudy Day";
	}
}