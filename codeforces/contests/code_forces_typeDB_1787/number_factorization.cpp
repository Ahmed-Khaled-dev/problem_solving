#include <iostream>

using namespace std;

void fast(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

long long all_factors[100005];
long long correct_factors[100005];

int get_factors(long long n, int number_of_factors) {
    for (long long j = 1; (j * j) <= n; j++)
    {
        if (n % j == 0)
        {
            all_factors[number_of_factors] = j;
            number_of_factors++;
            if (j != (n / j))
            {
                all_factors[number_of_factors] = n / j;
                number_of_factors++;
            }
        }
    }
    return number_of_factors;
}

void check_correct_factors(int number_of_factors) {
    
    int number_of_correct_factors = 0;

    for (int i = 1; i < number_of_factors; i++)
    {
        int prime_factors[1000] = {};
        int prime_factors_frequency[1000] = {};  
        bool correct_factor = 1;

        long long factor = all_factors[i];
        for (long long j = 2; j * j <= factor; j++)
        {
            cout << "Factor now is " << factor << endl;
            while (factor % j == 0)
            {
                factor /= j;     
                prime_factors_frequency[j]++;
                cout << "Prime number " << j << " frequency is " << prime_factors_frequency[j] << endl;
                if (prime_factors_frequency[j] > 1)
                {
                    correct_factor = 0;
                }
            }
        }
        if (factor != 1)
        {
            prime_factors_frequency[factor]++;
            if (prime_factors_frequency[factor] > 1)
            {
                correct_factor = 0;
            }
        }
        if (correct_factor)
        {
            number_of_correct_factors++;
        }
    }
}
int main() {
    fast();

    int t;
    long long n;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int number_of_factors = 0;
        cin >> n;
        number_of_factors = get_factors(n, number_of_factors);
        cout << "All Factors:" << endl;
        for (int k = 0; k < number_of_factors; k++)
        {
            cout << all_factors[k] << endl;
        }
        check_correct_factors(number_of_factors);
        cout << "Correct Factors:" << endl;
        cout << correct_factors[0] << endl;
    }
}