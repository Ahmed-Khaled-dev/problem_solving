#include <iostream>

using namespace std;

void fast() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

long long arr[100005];

int main() {
    long long N, even_sum = 0, odd_sum = 0, even_remainder, interesting_pairs_sum = 0;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 == 0)
        {
            even_sum++;
        }
        else
        {
            odd_sum++;
        }
    }

    if (even_sum == odd_sum)
    {
        interesting_pairs_sum += (even_sum + odd_sum) / 2;
    }
    else if (even_sum > odd_sum)
    {
        interesting_pairs_sum += (even_sum + odd_sum) / 2;
    }
    else
    {
        interesting_pairs_sum += even_sum;
    }    

    cout << interesting_pairs_sum;
}