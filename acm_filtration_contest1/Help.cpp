#include <iostream>

using namespace std;

void fast() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int arr[100005];
long long int sum;

int main() {
    fast();

    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    if (sum == 0)
    {
        cout << 0;
    }
    else
    {
        cout << 1;
    }
}