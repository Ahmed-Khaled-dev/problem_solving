/**
*    author:  Akayiz
*    created: 2023-02-26 21:23:23
**/

#include <iostream>
#include <vector>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

long long original_matrix[505][505];
long long prime_matrix[505][505];
vector<long long> primes;

int main() {
    fast();

    int rows, columns;
    cin >> rows >> columns;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cin >> original_matrix[i][j];
        } 
    }
     
    for (int i = 2; i <= 110000; i++)
    {
        bool prime = 1;
        int number = i;
        for (int j = 2; j*j <= number; j++)
        {
            if (number % j == 0)
            {
                prime = 0;
                break;
            }
        }
        
        if (prime)
        {
            primes.push_back(number);
        }
    }
    
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            int low = 0, high = primes.size() - 1, mid, ans = -1, min_diff = INT_MAX;
            while (low <= high)
            {
                mid = (low + high) / 2;
                if (original_matrix[i][j] > primes[mid])
                {
                    low = mid + 1;
                }
                else if (original_matrix[i][j] < primes[mid])
                {
                    high = mid - 1;
                    if (abs(original_matrix[i][j] - primes[mid]) < min_diff)
                    {
                        ans = primes[mid];
                        min_diff = abs(original_matrix[i][j] - primes[mid]);
                    }
                }
                else
                {
                    ans = primes[mid];
                    break;
                }
                // cout << mid << endl;
                // cout << primes[mid] << endl;
                // cout << ans << endl;
            }
            
            prime_matrix[i][j] = ans - original_matrix[i][j];
        } 
    }

    long long sum, mini_increase = INT_MAX;
    for (int i = 0; i < rows; i++)
    {
        sum = 0;
        for (int j = 0; j < columns; j++)
        {
            sum += prime_matrix[i][j];
        }
        mini_increase = min(sum, mini_increase);
    }

    for (int j = 0; j < columns; j++)
    {
        sum = 0;
        for (int i = 0; i < rows; i++)
        {
            sum += prime_matrix[i][j];
        }
        mini_increase = min(sum, mini_increase);
    }

    cout << mini_increase;

    return 0;
}