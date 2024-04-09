/**
*    author:  Akayiz
*    created: 2024-02-19 16:37:53
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

bool arr[15][15];

int main() {
    Akayiz

    int t;
    cin >> t;

    int n;
    bool found1;
    string row;
    while(t--){
        cin >> n;
        int first_one_count = 0, second_one_count = 0;
        found1 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> row;
            for (int j = 0; j < n; j++)
            {
                int cell = row[j] - '0';
                arr[i][j] = cell;
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if(arr[i][j] == 1){
                    if(found1)
                        second_one_count++;
                    else
                        first_one_count++;
                }
            }
            if(found1){
                if(second_one_count == first_one_count - 2 || second_one_count == first_one_count + 2){
                    cout << "TRIANGLE" << el;
                    break;
                }
                else if(second_one_count == first_one_count){
                    cout << "SQUARE" << el;
                    break;
                }
            }
            if(first_one_count > 0)
                found1 = 1;
        }

        
    }

    return 0;
}