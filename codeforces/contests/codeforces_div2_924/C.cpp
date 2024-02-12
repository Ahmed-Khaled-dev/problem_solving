/**
*    author:  Akayiz
*    created: 2024-02-11 12:35:33
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

    int line_position, number_recieved;
    while(t--){
        cin >> line_position >> number_recieved;
        
        int ans = 0;
        for (int i = 2; i <= 6; i++)
        {
            int up_down = i + i - number_recieved;
            //cout << up_down << endl;
            if(line_position - ((line_position % up_down) * up_down) == number_recieved){
                ans++;
            }
        }

        cout << ans << el;
        
    }

    return 0;
}