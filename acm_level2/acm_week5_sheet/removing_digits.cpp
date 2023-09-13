/**
*    author:  Akayiz
*    created: 2023-07-18 15:48:43
**/

#include <iostream>
#include <algorithm>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

int memo[1000005] = {};

int find_max_digit(int number){
    int max_digit = 0;
    while (number != 0) {
        max_digit = max(max_digit, number % 10);
        number /= 10;
    }
    return max_digit;
}

int find_min_no_of_steps_to_reach_zero(int number){
    memo[0] = 0;

    for (int i = 1; i <= number; i++)
    {
        int current_number = i;
        int steps_count = 0;
        while (true)
        {
            current_number -= find_max_digit(current_number);
            steps_count++;

            if (memo[current_number] != 0 || current_number == 0)
            {
                memo[i] = memo[current_number] + steps_count;
                break;
            }
        }
    }

    return memo[number];
}

int main() {
    fast();

    long long number;
    cin >> number;

    cout << find_min_no_of_steps_to_reach_zero(number);

    return 0;
}