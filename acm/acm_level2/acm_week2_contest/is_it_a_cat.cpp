/**
*    author:  Akayiz
*    created: 2023-04-10 21:59:56
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

    long long t, n;
    string meow;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n;
        cin >> meow;

        bool not_meow = 0, m_ended = 0, e_ended = 0, o_ended = 0, w_ended = 0;
        long long m_end = -1, e_end = -1, o_end = -1, w_end = meow.length() - 1;

        for (long long j = 0; j < meow.length(); j++)
        {
            if ((meow[j] == 'e' || meow[j] == 'E') && !m_ended)
            {
                m_end = j - 1;
                m_ended = 1;
            }
            else if ((meow[j] == 'o' || meow[j] == 'O') && !e_ended)
            {
                e_end = j - 1;
                e_ended = 1;
            }
            else if ((meow[j] == 'w' || meow[j] == 'W') && !o_ended)
            {
                o_end = j - 1;
                o_ended = 1;
            }
        }

        if (m_end == -1 || e_end == -1 || o_end == -1 || w_end == -1)
        {
            cout << "No" << endl;
            //cout << "-1" << endl;
            continue;
        }
        
        for (long long j = 0; j < meow.length(); j++)
        {
            if (j <= m_end && meow[j] != 'm' && meow[j] != 'M')
            {
                cout << "No" << endl;
                not_meow = 1;
                //cout << "Test1" << endl;
                break;
            }
            else if (j <= e_end && j > m_end && meow[j] != 'e' && meow[j] != 'E')
            {
                //cout << e_end << " " << m_end << endl;
                cout << "No" << endl;
                not_meow = 1;
                //cout << "Test2" << endl;
                break;
            }
            else if (j <= o_end && j > e_end && meow[j] != 'o' && meow[j] != 'O')
            {
                cout << "No" << endl;
                not_meow = 1;
                //cout << "Test3" << endl;
                break;
            }
            else if (j > o_end && meow[j] != 'w' && meow[j] != 'W')
            {
                cout << "No" << endl;
                not_meow = 1;
                //cout << "Test4" << endl;
                break;
            }
        }
        //cout << not_meow << endl;
        if (!not_meow)
        {
            cout << "Yes" << endl;
        }
    }
    
    return 0;
}