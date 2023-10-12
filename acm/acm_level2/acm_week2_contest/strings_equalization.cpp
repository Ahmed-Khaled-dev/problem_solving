/**
*    author:  Akayiz
*    created: 2023-04-10 23:21:25
**/

#include <iostream>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

int s_freq[1000];
int t_freq[1000];

int main() {
    fast();

    int q;
    cin >> q;

    string s, t;
    for (int i = 0; i < q; i++)
    {
        cin >> s >> t;
        bool found = 1;
        //string s2 = s, t2 = t;
        for (int i = 0; i < s.length(); i++)
        {
            s_freq[((int)s[i] - (int) 'a')]++;
            t_freq[((int)t[i] - (int) 'a')]++;
        }
        
        for (int i = 0; i < 26; i++)
        {
            cout << (char) (i + 'a') << endl;
            cout << i + 'a' << endl;
            cout << s_freq[i] << " " << t_freq[i];
            if (s_freq[i] != t_freq[i])
            {
                found = 0;
                break;
            }
        }

        if (found)
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