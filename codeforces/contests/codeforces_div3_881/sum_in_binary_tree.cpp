/**
*    author:  Akayiz
*    created: 2023-06-20 18:09:30
**/

#include <iostream>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

int main() {
    fast();

    int t;
    unsigned long long number;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> number;
        unsigned long long sum = 0;
        while (number != 0)
        {
            sum += number;
            if (number % 2 == 0)
            {
                number /= 2;
            }
            else
            {   
                number = (number - 1) / 2;
            }
        }
        cout << sum << endl;
    }

    return 0;
}