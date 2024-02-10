/**
*    author:  Akayiz
*    created: 2024-01-18 16:16:32
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

    int n;
    string s1, s2, s3;
    while(t--){
        cin >> n;
        cin >> s1 >> s2 >> s3;

        bool works = 0;
        for (int i = 0; i < n; i++)
        {
            if(s3[i] != s2[i] && s3[i] != s1[i]){
                cout << "YES" << el;
                works = 1;
                break;
            }
        }

        if(!works){
            cout << "NO" << el;
        }
    }

    return 0;
}