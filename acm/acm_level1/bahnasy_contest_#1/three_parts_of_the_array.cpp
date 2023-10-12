/**
*    author:  Akayiz
*    created: 2023-02-24 21:20:00
**/

#include <iostream>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

long long arr[200005];

int main() {
    fast();

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    int low = 0, high = n - 1;
    long long sum1 = arr[low], sum3 = arr[high], ans = 0;
    while (low < high)
    {
        if (sum1 > sum3)
        {
            high--;
            sum3 += arr[high];
        }
        else if (sum1 == sum3)
        {
            high--;
            sum3 += arr[high];
            ans = max(ans, sum1);
        }
        else
        {
            low++;
            sum1 += arr[low];
        } 
    }
    
    cout << ans;

    return 0;
}