/**
*    author:  Akayiz
*    created: 2023-02-24 19:32:49
**/

#include <iostream>
#include <cmath>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

long long points[100005];

int main() {
    fast();

    long long n, point1;
    long long distance, sum = 0;
    cin >> n >> distance;

    for (long long i = 0; i < n; i++)
    {
        cin >> points[i];
    }

    for (long long i = 0; i < n - 1; i++)
    {
        point1 = points[i];
        long long low = i + 1, high = n - 1, mid, ans = 0;
        while (low <= high)
        {
            mid = (low + high) / 2;
            if (abs(points[mid] - point1) <= distance)
            {
                ans = max(ans, mid - i);
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
            //cout << mid << endl;
            //cout << ans << endl;
        }
        sum += (ans*(ans-1)) / 2;
        //sum += ans;
        //cout << "Sum = " << sum << endl;
    }

    cout << sum;
    

    return 0;
}