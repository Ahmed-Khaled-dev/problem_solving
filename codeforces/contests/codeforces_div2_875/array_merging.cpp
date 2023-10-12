/**
*    author:  Akayiz
*    created: 2023-05-28 18:14:21
**/

#include <iostream>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}
const int MAX_N = 200005;
int a[MAX_N], b[MAX_N];

int main() { 
    fast();

    int t, n, first_a_digit_freq, first_b_digit_freq;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n;
        int *freq_a = new int[MAX_N](), *freq_b = new int[MAX_N]();
        int current_digit_freq = 0, maxi_equal_freq = 0, current_digit = -1;
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
            if (current_digit == a[j])
            {
                current_digit_freq++;
            }
            else
            {
                //maxi_equal_freq = max(current_digit_freq, maxi_equal_freq);
                freq_a[current_digit] = max(current_digit_freq, freq_a[current_digit]);
                if (current_digit >= 0)
                    maxi_equal_freq = max(maxi_equal_freq, freq_a[current_digit]);
                current_digit_freq = 0;
                current_digit_freq++;
                current_digit = a[j];
            }
        }
        freq_a[a[n - 1]] = max(current_digit_freq, freq_a[a[n - 1]]);
        //last_a_digit_freq = current_digit_freq;
        current_digit_freq = 0;
        current_digit = -1;
        for (int j = 0; j < n; j++)
        {
            cin >> b[j];
            if (current_digit == b[j])
            {
                current_digit_freq++;
            }
            else
            {
                //maxi_equal_freq = max(current_digit_freq, maxi_equal_freq);
                freq_b[current_digit] = max(current_digit_freq, freq_b[current_digit]);
                if (current_digit >= 0)
                    maxi_equal_freq = max(maxi_equal_freq, freq_a[current_digit] + freq_b[current_digit]);
                current_digit_freq = 0;
                current_digit_freq++;
                current_digit = b[j];
            }
        }
        freq_b[b[n - 1]] = max(current_digit_freq, freq_b[b[n - 1]]);
        maxi_equal_freq = max(maxi_equal_freq, freq_a[b[n - 1]] + freq_b[b[n - 1]]);
        
        cout << maxi_equal_freq << endl;
        delete [] freq_a;
        freq_a = NULL;
        delete [] freq_b;
        freq_b = NULL;
    }

    return 0;
}