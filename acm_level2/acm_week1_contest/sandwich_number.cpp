/**
*    author:  Akayiz
*    created: 2023-04-03 22:03:25
**/

#include <iostream>
#include <string>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

int main() {
    fast();

    string s;
    cin >> s;

    string decimal;
    
    if (s.length() == 8)
    {
        if (s[0] >= 'A' && s[0] <= 'Z')
        {
            if (s[7] >= 'A' && s[5] <= 'Z')
            {
                for (int i = 1; i < 7; i++)
                {
                    decimal += s[i];
                }
                //cout << decimal << endl;
                if (stoi(decimal) >= 100000 && stoi(decimal) <= 999999)
                {
                    cout << "Yes";
                    return 0;
                }
            }  
        }
    }
    
    cout << "No";
    
    

    return 0;
}