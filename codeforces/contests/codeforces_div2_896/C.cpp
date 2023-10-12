/**
*    author:  Akayiz
*    created: 2023-09-13 20:39:07
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

int matrix_rows[200005];

int main() {
    Akayiz

    int t;
    cin >> t;

    int rows, columns;
    while(t--){
        cin >> rows >> columns;
        if(columns == 1)
            cout << 0 << endl;
        else if(rows >= columns - 1)
            cout << columns << endl;
        else
            cout << rows + 1 << endl;

        for (int i = 0; i < columns; i++)
        {
            matrix_rows[i] = i;
            cout << matrix_rows[i] << " ";
        }
        cout << endl;
        
        int cnt = rows - 1;
        while(cnt--)
        {
            for (int i = 0; i < columns; i++)
            {  
                //cout << rows - cnt << endl;
                if(rows - cnt <= columns - 1)
                {
                    if(i == columns - 1)
                        matrix_rows[i] = matrix_rows[0] - 1;
                    else
                        matrix_rows[i] = matrix_rows[i + 1];
                }
                cout << matrix_rows[i] << " ";
            }
            cout << endl;
        }
        
    }
    return 0;
}