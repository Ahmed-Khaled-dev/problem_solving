#include <iostream>

using namespace std;

long long sum_array(int x, long long y[15]) {
	long long sum = 0;
	for (int i = 0; i < x; i++)
	{
		sum += y[i];
	}
	return sum;
}

long long arr[15], total_sum;
int main() {
	int N, K, M;
	cin >> N >> K >> M;

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < K; i++)
	{
		total_sum = sum_array(N, arr);
		for (int j = 0; j < N; j++)
		{
			arr[j] = total_sum - arr[j];
		}
	}

	cout << arr[M - 1];
}