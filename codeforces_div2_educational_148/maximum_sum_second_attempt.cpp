/**
*    author:  Akayiz
*    created: 2023-05-12 18:43:25
**/

#include <iostream>
#include <algorithm>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

long long elements_acending[200005];
long long t, elements_count, operations_count;
long long answer = 0;

void dfs(long long begining_sum, long long operations_count, long long next_max, long long next_min){
    if (operations_count == 0)
    {
        answer = max(answer, begining_sum);
        return;
    }
    dfs(begining_sum - (elements_acending[next_max]), operations_count - 1, next_max - 1, next_min);
    dfs(begining_sum - (elements_acending[next_min] + elements_acending[next_min + 1]), operations_count - 1, next_max, next_min + 2);
}

int main() {
    fast();

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> elements_count >> operations_count;
        long long current_sum = 0, next_max = elements_count - 1, next_min = 0;
        answer = 0;
        for (int j = 0; j < elements_count; j++)
        {
            cin >> elements_acending[j];
            current_sum += elements_acending[j];
        }
        
        sort(elements_acending, elements_acending + elements_count);

        dfs(current_sum, operations_count, next_max, next_min);
        cout << answer << endl;
    }

    return 0;
}