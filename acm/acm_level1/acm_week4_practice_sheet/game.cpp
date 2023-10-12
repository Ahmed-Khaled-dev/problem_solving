#include <iostream>
#include <algorithm>

using namespace std;

void fast(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

long long arr[100005];

int main() {
    long long n, q, k, low, high, mid, ans;

    cin >> n >> q;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    //sort(arr, arr + n);

    for (int i = 0; i < q; i++)
    {
        cin >> k;
        low = 0, high = n - 1, ans = -1;
        
        while (low <= high)
        {
            mid = (low + high) / 2;
            if (arr[mid] > k)
            {
                ans = arr[mid];
                high = mid - 1;
            }
            else if (arr[mid] < k)
            {
                low = mid + 1;
            }
            else
            {
                if (mid != (n-1))
                {
                    ans = arr[mid + 1];
                }
                break;
            }
        }
        cout << ans << endl;
    }
}