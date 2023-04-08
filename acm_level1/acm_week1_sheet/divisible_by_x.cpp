#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main() {
	long long A, B, X, divisibles_sum = 0;
	cin >> A >> B >> X;

	if (max(A, B) % X == 0)
	{
		divisibles_sum++;
		if (min(A, B) % X == 0)
		{
			divisibles_sum++;
			if (A != B)
			{
				divisibles_sum += floor(((double)(abs(A - B) - 1) / X));
			}
			cout << divisibles_sum;
			return 0;
		}
	}
	else if (min(A, B) % X == 0)
	{
		divisibles_sum++;
	}
	
	divisibles_sum += floor(((double)(abs(A - B)) / X));
	
	cout << divisibles_sum;
}