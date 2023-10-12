/**
*    author:  Akayiz
*    created: 2023-09-18 17:57:42
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
    
    int size, mex, max;
    while(t--){
        cin >> size >> mex >> max;

        int ans;
        if(mex <= size && mex - 1 <= max)
        {
            if(max != mex){
                ans = (max) * (size - mex) + ((mex - 1)*(mex) / 2);
            }
            else{
                ans = (max - 1) * (size - (mex - 1)) + ((mex - 2)*(mex - 1) / 2);
            }
        }
        else
            ans = -1;

        cout << ans << el;
    }

    return 0;
}