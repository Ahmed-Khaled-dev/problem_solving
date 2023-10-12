#include <iostream>

using namespace std;

void fast() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int freq[2000005];

int main() {
    int n, num, max = -1, index = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        freq[num]++;
    }

    for (int i = 0; i < 2000005; i++)
    {
        if (freq[i] > max)
        {
            max = freq[i];
            index = i;
        }
    }

    cout << index;
}