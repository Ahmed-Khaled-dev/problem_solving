#include <iostream>

using namespace std;

int main() {
	int B, O;
	cin >> B >> O;

	if ((B + O) / 2 % 2 == 0)
	{
		cout << "Beevo";
	}
	else
	{
		cout << "Oveeb";
	}
}