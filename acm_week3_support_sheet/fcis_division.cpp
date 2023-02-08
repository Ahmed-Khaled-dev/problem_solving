#include <iostream>

using namespace std;

void fast() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

bool is_number_prime(int num) {
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main() {
    int N, reverse_N = 0;
    bool is_prime = 1, is_reverse_prime = 1;
    cin >> N;

    int N2 = N; // Same value but to be used in the reverse loop

    while (N2 != 0)
    {
        reverse_N = (reverse_N * 10) + N2 % 10;
        N2 = N2 / 10;
    }

    if (N == 1)
    {
        is_prime = 0;
        is_reverse_prime = 0;
    }
    else
    {
        is_prime = is_number_prime(N);
        is_reverse_prime = is_number_prime(reverse_N);
    }

    if (!is_prime)
    {
        cout << "LAB B";
    }
    else if (is_prime && is_reverse_prime && reverse_N != N)
    {
        cout << "LAB C";
    }
    else if ((is_prime && !is_reverse_prime) || is_prime && reverse_N == N)
    {
        cout << "LAB A";
    }
}