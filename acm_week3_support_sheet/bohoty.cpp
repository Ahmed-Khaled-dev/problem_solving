#include <iostream>
#include <algorithm>

using namespace std;

void fast() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int arr[105][105];

int main() {
    fast();
    int rows, columns, k;
    cin >> columns >> rows >> k;

    for (int i = 0; i < columns; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            cin >> arr[j][i];
        }
    }

    for (int i = 0; i < rows; i++)
    {
        sort(arr[i], arr[i] + columns);
        reverse(arr[i], arr[i] + columns);
    }
    
    for (int i = 0; i < rows; i++)
    {
        long long sum = 0;
        for (int j = 0; j < k; j++) 
        {
            sum += arr[i][j];
        }
        cout << sum << "\n";
    }
}