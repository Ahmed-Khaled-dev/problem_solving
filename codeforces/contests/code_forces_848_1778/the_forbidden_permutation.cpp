#include <iostream>

using namespace std;

void fast(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int n_arr[100005], pos[100005], m_arr[100005];

int main() {
    fast();

    int t, n, m, d, min_steps = 0, option1, option2;
    bool not_good = 0;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            cin >> n_arr[i];
            pos[n_arr[i]] = i;
        }

        cin >> m;
        for (int j = 0; j < m; j++)
        {
            cin >> m_arr[i];
        }

        cin >> d;

        int c = 0;

        while (not_good)
        {
            if (pos[m_arr[c]] < pos[m_arr[c]+1] && pos[m_arr[c]+1] <= (pos[m_arr[c]] + d))
            {
                option1 = pos[m_arr[c] + 1] - pos[m_arr[c]];
                if (n - pos[m_arr[c]] >= option1)
                {
                    // Complete
                }
                //option2 = 
                //min_steps = 
            }
        }


        
    }


}