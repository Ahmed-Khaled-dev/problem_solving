#include <iostream>

using namespace std;

void fast(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    fast();

    char arr[10] = { 'c', 'o', 'd', 'e', 'f', 'o', 'r', 'c', 'e', 's' };

    int t; 
    cin >> t;

    char latin_char;

    for (int i = 0; i < t; i++)
    {
        bool char_equal = 0;
        cin >> latin_char;
        for (int j = 0; j < 10; j++)
        {
            if (latin_char == arr[j])
            {
                char_equal = 1;
                break;
            }
        }
        if (char_equal)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}