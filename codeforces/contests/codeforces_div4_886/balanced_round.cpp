/**
*    author:  Akayiz
*    created: 2023-07-21 17:56:32
**/

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

    long long t;
    cin >> t;

    long long problems_count, max_difference;
    
    for (long long i = 0; i < t; i++)
    {   
        long long difficulty[200005] = {};
        cin >> problems_count >> max_difference;
        for (long long j = 0; j < problems_count; j++)
        {
            cin >> difficulty[j];
        }

        sort(difficulty, difficulty + problems_count);

        bool new_consectutives = 1;
        long long balanced_problems = 0;
        long long answer = 1;

        for (long long j = 0; j < problems_count - 1; j++)
        {
            if (abs(difficulty[j] - difficulty[j + 1]) <= max_difference)
            {
                if (new_consectutives)
                {
                    balanced_problems += 2;
                    new_consectutives = 0;
                }
                else
                {
                    balanced_problems += 1;
                }
            }
            else
            {
                answer = max(answer, balanced_problems);
                balanced_problems = 0;
                new_consectutives = 1;
            }
        }
        answer = max(answer, balanced_problems);
        cout << problems_count - answer << endl;
    }
    

    return 0;
}