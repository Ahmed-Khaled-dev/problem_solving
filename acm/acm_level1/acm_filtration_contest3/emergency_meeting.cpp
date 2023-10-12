#include <iostream>

using namespace std;

void fast(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    fast();

    int n;
    unsigned long long int sum = 0;
    cin >> n;

    unsigned long long int n_max = n;
    unsigned long long int n_min = 1;

    for (int i = n; i > 0; i--)
    {
        if ((n - i) % 2 == 0 && (n - i) != 0)
        {
            n_max--;
            n_min++;
        }

        sum += (i * (n_max - n_min));
        //cout << i << "\n" << n_max << "\n" << n_min << "\n";     
    }

    cout << sum;
}