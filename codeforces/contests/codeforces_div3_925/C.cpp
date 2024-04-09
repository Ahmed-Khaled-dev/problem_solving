/**
*    author:  Akayiz
*    created: 2024-02-13 17:54:02
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

int arr[200005];

int main() {
    Akayiz

    int t;
    cin >> t;

    int n;
    while(t--){
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        
        int first = arr[0], first_freq = 0, last = arr[n - 1], last_freq = 0;
        bool all_arr_first = 1;
        for (int i = 0; i < n; i++)
        {
            if(arr[i] == first){
                first_freq++;
            }
            else{
                all_arr_first = 0;
                break;
            }
        }

        if(!all_arr_first){
            for (int i = n - 1; i >= 0; i--)
            {
                if(first == last && arr[i] == last){
                    first_freq++;   
                }
                else if(arr[i] == last){
                    last_freq++;
                }
                else
                    break;
            }
        }
            
        cout << n - max(first_freq, last_freq) << el;
    }

    return 0;
}