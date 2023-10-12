#include <iostream>

using namespace std;

void fast() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    long long N, final_answer = 1;
    long long mod = (1e9 + 7);
    
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        final_answer = ((final_answer % mod) * (4 % mod)) % mod;
    }
    cout << final_answer;
}