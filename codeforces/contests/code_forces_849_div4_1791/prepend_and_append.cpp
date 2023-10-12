#include <iostream>

using namespace std;

void fast(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

char binary_string[2005];

int main() {
    fast();

    int t, n;
    cin >> t;

    for (int i = 0; i < t; i++)
    { 
        cin >> n;
        int beg = 0, end = n - 1;

        cin >> binary_string;

        while (true)
        {
            if ((binary_string[beg] == '0' && binary_string[end] == '1') || (binary_string[beg] == '1' && binary_string[end] == '0'))
            {
                beg++;
                end--;
            }
            else
            {
                break;
            }
        }

        if ((end - beg) < 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << (end - beg) + 1 << endl;
        } 
    }
}