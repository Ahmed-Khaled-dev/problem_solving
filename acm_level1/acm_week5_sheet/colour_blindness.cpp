#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

int main() {
    fast();

    int t, columns_count;
    cin >> t;
    string row1, row2;
    for (int i = 0; i < t; i++)
    {
        cin >> columns_count;
        cin >> row1 >> row2;
        replace(row1.begin(), row1.end(), 'G', 'B');
        replace(row2.begin(), row2.end(), 'G', 'B');
        if (row1 == row2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }  
    }
    

    return 0;
}