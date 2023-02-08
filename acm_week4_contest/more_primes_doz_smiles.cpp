#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

void fast(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int doz[10005], oveeb[10005];

int get_greatest_prime_divisor(int num) {
    int max_prime_divisor = 0;

    for (int i = 2; i*i <= num; i++)
    {
        while (num % i == 0)
        {
            num /= i;
            if (num > max_prime_divisor)
            {
                max_prime_divisor = i;
            }
            //cout << "Number is now equal = " << num << endl;
        }
    }

    if (num > 1)
    {
        if (max_prime_divisor < num)
        {
            max_prime_divisor = num;
        }
    }
    return max_prime_divisor;
}

int main() {
    fast();

    int t, n;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        unsigned long long sum_oveeb = 0, sum_doz = 0;
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            cin >> doz[j];
            doz[j] = get_greatest_prime_divisor(doz[j]);
            //cout << doz[j] << " " << endl;
            sum_doz += doz[j];
        }
        for (int j = 0; j < n; j++)
        {
            cin >> oveeb[j];
            oveeb[j] = get_greatest_prime_divisor(oveeb[j]);
            //cout << oveeb[j] << " " << endl;
            sum_oveeb += oveeb[j];
        }

        if (sum_doz > sum_oveeb)
        {
            cout << "Smiles" << endl;
        }
        else if (sum_doz < sum_oveeb)
        {
            cout << "Cries" << endl;
        }
        else
        {
            cout << "Meeeh!" << endl;
        }
    }
}