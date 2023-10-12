/**
*    author:  Akayiz
*    created: 2023-09-18 19:31:55
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

int arr[100005];
int first_oc[100005];

int main() {
    Akayiz

    int t;
    cin >> t;

    int n, colors;
    while(t--){
        cin >> n >> colors;
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        
        int cur = 1;
        for (int i = 1; i <= n; i++)
        {
            if(arr[i] > cur){
                first_oc[cur] = i;
                first_oc[arr[i]] = -i;
                cur = arr[i];
            }
        }

        for (int i = 1; i <= n; i++)
        {
            first_oc[i] = first_oc[i - 1] + first_oc[i];
        }

        for (int i = 1; i <= 5; i++)
        {
            cout << first_oc[i] << " ";
        }
        cout << endl;
    }

    return 0;
}