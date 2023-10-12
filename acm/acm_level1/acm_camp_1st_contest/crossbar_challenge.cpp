/**
*    author:  Akayiz
*    created: 2023-02-12 20:09:28
**/

#include <iostream>
#include <vector>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

vector<int> factors;

int main() {
    fast();

    long long ball_size, scattered_balls_count, ball_size_temp;
    long long factors_minus_1 = 1;

    cin >> ball_size >> scattered_balls_count;
    ball_size_temp = ball_size;
    
    for (int i = 2; i*i <= ball_size_temp; i++)
    {
        while (ball_size_temp % i == 0)
        {
            ball_size_temp /= i;
            factors.push_back(i);
        }
    }

    if (ball_size_temp > 1)
    {
        factors.push_back(ball_size_temp);
    }
    
    if (scattered_balls_count > factors.size())
    {
        cout << "-1";
        return 0;
    }
    
    for (int i = 0; i < scattered_balls_count - 1; i++)
    {
        cout << factors[i] << " ";
        factors_minus_1 *= factors[i];
    }
    
    cout << ball_size / factors_minus_1;
    

    return 0;
}