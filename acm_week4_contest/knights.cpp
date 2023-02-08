#include <iostream>
#include <algorithm>

using namespace std;

void fast(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

long long monsters[200005];

int binary_search(int n, long long knight_strength) {
    long long low = 0, high = n - 1, mid;
    long long ans = 0;

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (monsters[mid] < knight_strength)
        {
            ans = mid + 1;
            low = mid + 1;
        }
        else if (monsters[mid] > knight_strength)
        {
            high = mid - 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    //cout << ans << endl;

    return ans;
}

int main() {
    fast();

    int n;
    long long knight_strength;
    unsigned long long sum = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> monsters[i];
    }

    sort(monsters, monsters + n);

    for (int i = 0; i < n; i++)
    {
        cin >> knight_strength;
        sum += binary_search(n, knight_strength);
    }

    cout << sum;
}