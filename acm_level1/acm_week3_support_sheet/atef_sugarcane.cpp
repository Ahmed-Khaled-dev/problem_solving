#include <iostream>

using namespace std;

void fast() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

char arr[1005];

int main() {
	int i = 0, max = -1, counter = 0;
	cin >> arr;

	while (true)
	{
		if (arr[i] == '(')
		{
			i += 2;
			if (counter > max)
			{
				max = counter;
			}
			counter = 0;
		}
		else
		{
			if (arr[i] == '\0')
			{
				if (counter > max)
				{
					max = counter;
				}
				break;
			}
			else
			{
				counter++;
				i++;
			}		
		}
	}

	cout << max;
}