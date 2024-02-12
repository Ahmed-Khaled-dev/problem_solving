/**
*    author:  Akayiz
*    created: 2024-02-11 12:08:47
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

int main() {
    Akayiz

    int t;
    cin >> t;

    int n, a;
    while(t--){
        cin >> n;
        
        set<int> s = {};
        vector<int> arr = {};

        for (int i = 0; i < n; i++)
        {
            cin >> a;
            s.insert(a);
        }

        for(auto i : s){
            arr.push_back(i);
            //cout << i << el;
        }

        int p1 = 0, p2 = 0, curr_ans = 0, ans = 0;
        while(true){
            //cout << arr[p2] << " " << arr[p1] << endl;
            //cout << arr[p2] - arr[p1] << " " << n << endl;
            if(arr[p2] - arr[p1] < n){
                p2++;
                curr_ans++;
                //cout << "curr ans = " << curr_ans << endl;
            }
            else{
                ans = max(ans, curr_ans);
                //cout << "ans = " << ans << endl;
                p1++;
                curr_ans--;
            }

            if(p1 > p2)
                break;

            if(p2 >= arr.size())
                break;
        }
        ans = max(ans, curr_ans);

        cout << ans << el;
    }

    return 0;
}