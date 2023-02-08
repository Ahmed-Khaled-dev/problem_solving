#include <iostream>
#include <algorithm>

using namespace std;

void fast() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int N, arr[10005], sorted_arr[10005], score;

int main() {
    fast();
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
        sorted_arr[i] = arr[i];
    }

    sort(sorted_arr, sorted_arr + N);

    for (int i = 0; i < N; i++)
    {
        if (arr[i] == sorted_arr[i])
        {
            score++;
        }
    }

    cout << score;
}