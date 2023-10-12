/**
*    author:  Akayiz
*    created: 2023-02-12 21:39:44
**/

#include <iostream>
#include <vector>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

vector<int> answers;

int main() {
    fast();

    int n, answers_count;
    long long sum_a = 0, sum_b = 0, sum_c = 0, sum_d = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> answers_count;
        answers.push_back(answers_count);
    }
    
    for (int i = 0; i < n; i+=4)
    {
        sum_a += answers[i];
    }
    
    for (int i = 1; i < n; i+=4)
    {
        sum_b += answers[i];
    }

    for (int i = 2; i < n; i+=4)
    {
        sum_c += answers[i];
    }

    for (int i = 3; i < n; i+=4)
    {
        sum_d += answers[i];
    }
    
    if (sum_a >= sum_b && sum_a >= sum_c && sum_a >= sum_d)
    {
        cout << "A";
    }
    else if (sum_b >= sum_a && sum_b >= sum_c && sum_b >= sum_d)
    {
        cout << "B";
    }
    else if (sum_c >= sum_b && sum_c >= sum_a && sum_c >= sum_d)
    {
        cout << "C";
    }
    else if (sum_d >= sum_b && sum_d >= sum_c && sum_d >= sum_a)
    {
        cout << "D";
    }
    
    return 0;
}