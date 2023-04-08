#include <iostream>
#include <algorithm>

using namespace std;

void fast() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

char arr[5000000];

int main() {
    fast();

    int n;
    cin >> n;

    cin >> arr;
    sort(arr, arr + n);
    cout << arr;
}