/**
*    author:  Akayiz
*    created: 2023-09-12 21:52:21
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

char carpet[25][25];

int main() {
    Akayiz

    int t;
    cin >> t;

    int rows, columns;
    while(t--){
        cin >> rows >> columns;
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                cin >> carpet[i][j];
            }
        }

        bool found_v = 0, found_i = 0, found_k = 0, found_a = 0;
        
        for (int j = 0; j < columns; j++)
        {
            for (int i = 0; i < rows; i++)
            {
                if(!found_v){
                    if(carpet[i][j] == 'v')
                    {
                        found_v = 1;
                        break;
                    }}
                else if(!found_i && found_v){
                    if(carpet[i][j] == 'i')
                    {
                        found_i = 1;
                        break;
                    }}
                else if(!found_k && found_v && found_i){
                    if(carpet[i][j] == 'k')
                    {
                        found_k = 1;
                        break;
                    }}
                else if(!found_a && found_v && found_i && found_k){
                    if(carpet[i][j] == 'a')
                    {
                        found_a = 1;
                        break;
                    }}
            }
        }

        //cout << found_v << " " << found_i << " " << found_k << " " << found_a;
        if(found_a)
            cout << "YES" << el;
        else
            cout << "NO" << el;
    }

    return 0;
}