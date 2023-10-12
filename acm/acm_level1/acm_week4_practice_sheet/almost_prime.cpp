#include <iostream>
#include <algorithm>

using namespace std;

void fast(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    fast();

    int n, prime_divisors_count, almost_prime_counter = 0;
    bool prime_divisor;
    cin >> n;

    for (int i = 6; i <= n; i++)
    {
        prime_divisors_count = 0;
        int max = i;
        for (int j = 2; j <= max; j++)
        {
            prime_divisor = 0;
            while (max % j == 0)
            {
                prime_divisor = 1;
                max /= j;
            }
            if (prime_divisor)
            {
                prime_divisors_count++;
            }
            //cout << prime_divisors_count << endl;
        }
        
        if (prime_divisors_count == 2)
        {
            almost_prime_counter++;
        }
    }
    cout << almost_prime_counter << endl;
}