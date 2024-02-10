/**
*    author:  Akayiz
*    created: 2023-12-25 18:45:16
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

int shuffles[105][55];
int cards1[55], cards2[55];

const string values[15] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King", "Ace"};
const string suits[5] = {"Clubs", "Diamonds", "Hearts", "Spades"};

int main() {
    Akayiz

    int t;
    cin >> t;

    int shuffles_cnt, num;
    while(t--){
        cin >> shuffles_cnt;
        for (int i = 1; i <= shuffles_cnt; i++)
        {
            for (int j = 1; j <= 52; j++)
            {
                cin >> num;
                shuffles[i][j] = num;
            }
        }

        for (int i = 1; i <= 52; i++)
            cards1[i] = i;

        string k_input;
        int cnt = 1;
        getline(cin, k_input);
        while(getline(cin, k_input)){
            if(k_input.empty()){
                break;
            }
            int k = stoi(k_input);
            if(cnt % 2 != 0){
                for (int i = 1; i <= 52; i++)
                {
                    cards2[i] = cards1[shuffles[k][i]];
                }
            }
            else{
                for (int i = 1; i <= 52; i++)
                {
                    cards1[i] = cards2[shuffles[k][i]];
                }
            }
            cnt++;
        }

        if(cnt % 2 == 0){
            for (int i = 1; i <= 52; i++)
            {
                //cout << cards2[i] << el;
                cout << values[(cards2[i] - 1) % 13] << " of " << suits[(cards2[i] - 1) / 13] << el;
            }
        }
        else{
            for (int i = 1; i <= 52; i++)
            {
                //cout << cards1[i] << el;
                cout << values[(cards1[i] - 1) % 13] << " of " << suits[(cards1[i] - 1) / 13] << el;
            }
        }

        if(t != 0){
            cout << el;
        }
    }

    return 0;
}