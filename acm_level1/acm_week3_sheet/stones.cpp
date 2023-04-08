#include <iostream>

using namespace std;

int main() {
	char arr[105];
	cin >> arr;
	int i = 0, sum_red = 0, sum_blue = 0, sum_green = 0;

	while (arr[i] != '\0')
	{
		if (arr[i] == 'R')
		{
			sum_red++;
		}
		else if (arr[i] == 'G')
		{
			sum_green++;
		}
		else
		{
			sum_blue++;
		}
		i++;
	}

	printf("Red stones = %d\n", sum_red);
	printf("Blue stones = %d\n", sum_blue);
	printf("Green stones = %d", sum_green);
}