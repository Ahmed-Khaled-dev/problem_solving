#include <iostream>
#include <algorithm>

using namespace std;

void fast(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

long long arr_a[200005];
long long arr_b[200005];

long long bubble_sort(long long b, int arr_size) {
    int low = 0, high = arr_size - 1, mid;
    long long ans = -1;

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr_a[mid] > b)
        {
            ans = mid;
            high = mid - 1;
        }
        else if (arr_a[mid] <= b)
        {
            low = mid + 1;
        }

        /*cout << "Mid = " << mid << endl;
        cout << "Mid value = " << arr_a[mid] << endl;
        cout << "Answer = " << mid << endl;*/
    }

    if (ans == -1)
    {
        return arr_size;
    }
    else
    {
        return ans;
    }
}

int main() {
    fast();

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        cin >> arr_a[i];
    }

    sort(arr_a, arr_a + n);

    for (int i = 0; i < m; i++)
    {
        cin >> arr_b[i];
    }

    for (int i = 0; i < m; i++)
    {
        cout << bubble_sort(arr_b[i], n) << " ";
    }
}