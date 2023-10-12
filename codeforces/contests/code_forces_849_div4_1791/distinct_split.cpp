#include <iostream>

using namespace std;

void fast(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int char_frequency[30][200005];

int main() {
    fast();

    int t, n;
    char letter;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n;
        for (int j = 1; j <= n; j++)
        {
            cin >> letter;
            char_frequency[(int) (letter - 'a')][j] = char_frequency[(int) (letter - 'a')][j - 1] + 1;
            for (char k = 0; k < 26; k++)
            {
                if (k != (letter - 'a'))
                {
                    char_frequency[k][j] = char_frequency[k][j - 1];
                }  
            }
        }


        /*for (int j = 0; j < 26; j++)
        {
            cout << (char)(97 + j) << " ";
            for (int k = 1; k <= n; k++)
            {
                cout << char_frequency[j][k] << " ";
            }
            cout << endl;
        }*/

        long long max = 0, sum;
        for (int j = 1; j < n; j++)
        {
            sum = 0;
            for (int k = 0; k < 26; k++)
            {
                if (char_frequency[k][j] > 0)
                {
                    sum++;
                }
                if ((char_frequency[k][n] - char_frequency[k][j]) > 0)
                {
                    sum++;
                }
            }

            if (sum > max)
            {
                max = sum;
            }
        }

        cout << max << endl;
    }
} 