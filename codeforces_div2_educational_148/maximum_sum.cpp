/**
*    author:  Akayiz
*    created: 2023-05-12 17:57:09
**/

#include <iostream>
#include <algorithm>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

int elements_acending[200005];
int elements_decending[200005];

int main() {
    fast();

    int t, elements_count, operations_count;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        long long current_sum = 0, next_max = 0, next_min = 0;
        cin >> elements_count >> operations_count;
        for (int i = 0; i < elements_count; i++)
        {
            cin >> elements_acending[i];
            elements_decending[i] = elements_acending[i] * -1;
            current_sum += elements_acending[i];
        }
        
        sort(elements_acending, elements_acending + elements_count);
        sort(elements_decending, elements_decending + elements_count);

        for (int i = 0; i < operations_count; i++)
        {
            if (elements_acending[next_min] + elements_acending[next_min + 1] < (elements_decending[next_max] * -1))
            {
                current_sum -= elements_acending[next_min] + elements_acending[next_min + 1];
                next_min += 2;
            }
            else if (elements_acending[next_min] + elements_acending[next_min + 1] > (elements_decending[next_max] * -1))
            {
                current_sum -= (elements_decending[next_max] * -1);
                next_max++;
            }
            else
            {
                current_sum -= (elements_decending[next_max] * -1);
                next_max++;
            }
        }

        cout << current_sum << endl;  
    }
    
    return 0;
}