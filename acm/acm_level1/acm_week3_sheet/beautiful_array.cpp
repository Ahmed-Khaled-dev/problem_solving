#include <iostream>

using namespace std;

void fast() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int arr[100005];
bool freq[105];

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
        freq[arr[i]] = 1;
    }
    
    for (int i = 0; i < N - 1; i++)
    {
        bool is_beautiful = 0;
        int product = arr[i] * arr[i + 1];
        for (int j = 0; j < 100; j++)
        {
            if (freq[j] == 1)
            {
                if (product == j)
                {
                    //cout << product << "\n" << j << "\n";
                    is_beautiful = 1;
                    break;
                }
            }        
        }
        if (!is_beautiful)
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}