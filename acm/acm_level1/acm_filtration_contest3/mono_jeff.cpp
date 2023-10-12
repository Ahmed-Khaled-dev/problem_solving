#include <iostream>

using namespace std;

void fast(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int freq[100000];

int main() {
    fast();
    
    int N;
    char num;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> num;
        freq[(int)num]++;
        //cout << (int)num;
        //cout << freq[(int)num] << "\n";
    }

    int Q, L;
    char D;
    cin >> Q;

    /*for (int i = 0; i < 10; i++)
    {
        cout << freq[i] << "\n";
    }*/

    for (int i = 0; i < Q; i++)
    {
        cin >> L >> D;
        //cout << freq[D] << "\n";
        //cout << L << "\n";
        if (freq[(int)D] >= L)
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }
}