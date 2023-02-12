/**
*    author:  Akayiz
*    created: 2023-02-12 15:04:37
**/

#include <iostream>
#include <cmath>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

string brackets;

int main() {
    fast();

    int t, brackets_length;
    
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> brackets_length;
        cin >> brackets;

        int left_opened_brackets_sum = 0, right_opened_brackets_sum = 0, added_brackets = 0;

        for (int j = 0; j < brackets_length; j++)
        {
            if (brackets[j] == '(')
            {
                right_opened_brackets_sum++;
            }
            else
            {
                left_opened_brackets_sum++;
                if (left_opened_brackets_sum > right_opened_brackets_sum)
                {
                    right_opened_brackets_sum++;
                    added_brackets++;
                }
            }  
        }

        cout << abs(right_opened_brackets_sum - left_opened_brackets_sum) + added_brackets << endl; 
    }
    return 0;
}