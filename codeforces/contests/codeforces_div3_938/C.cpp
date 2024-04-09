/**
*    author:  Akayiz
*    created: 2024-04-08 17:13:52
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

long long arr[200005];

int main() {
    Akayiz 

    int t;
    cin >> t;
    
    int n, k;
    while(t--){
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int sum = 0, numOfShipsSunk = 0, endOfFirst = 0;
        //cout << "MEOW: " << k / 2 + k % 2 << " " << k / 2 << el;
        int i;
        for (i = 0; i < n; i++)
        {
            sum += arr[i];
            if(sum > (k / 2 + k % 2)){
                numOfShipsSunk += i;
                arr[i] -= (k / 2 + k % 2) - (sum - arr[i]);
                endOfFirst = i;
                break;
            }
        }
        //cout << "MEOW " << arr[0] << " " << arr[1] << el;
        if(i == n){
            numOfShipsSunk = n;
            cout << numOfShipsSunk << el;
            continue;
        }

        sum = 0;
        int j;
        for (j = n - 1; j >= endOfFirst; j--)
        {
            sum += arr[j];
            //cout << "SUM = " << sum << el;
            if(sum > k / 2){
                numOfShipsSunk += (n - j - 1);
                //cout << "NO = " << numOfShipsSunk << el;
                break;
            }
        }

        if(j == endOfFirst - 1){
            numOfShipsSunk += n - endOfFirst;
        }

        cout << numOfShipsSunk << el;
    }

    return 0;
}