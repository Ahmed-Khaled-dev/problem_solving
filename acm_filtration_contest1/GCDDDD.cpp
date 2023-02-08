#include <iostream>

using namespace std;

int main() {
	int B;
	cin >> B;

	for (int i = 1; i <= B; i++)
	{
		if (B % i == 0)
		{
			cout << i << " ";
		}
	}
}