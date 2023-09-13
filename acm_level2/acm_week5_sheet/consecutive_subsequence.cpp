/**
*    author:  Akayiz
*    created: 2023-07-31 19:59:38
**/

#include <iostream>
#include <algorithm>
#include <map>
#include <vector>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

// Longest increasing consequtive subsequence

map<long long, int> max_sub = {};

// Definition max_sub[arr[i]] :
// Returns the maximum increasing consequtive subsequence length ending at arr[i] while i can see from "i" -> 0 

// Base cases : max_sub[arr[0]] = 1

// Transition : max_sub[arr[i]] = max_sub[arr[i] - 1] + 1

long long arr[200005] = {};

int main() {
    fast();

    int arr_length;
    cin >> arr_length;

    for (int i = 0; i < arr_length; i++)
        cin >> arr[i];

    max_sub[arr[0]] = 1;

    for (int i = 1; i < arr_length; i++)
    {
        max_sub[arr[i]] = max(max_sub[arr[i]], max_sub[arr[i] - 1] + 1);
    }

    long long ans = -1, max_sub_last_number;
    for (int i = arr_length - 1; i >= 0; i--)
    {
        if (max_sub[arr[i]] > ans)
        {
            ans = max_sub[arr[i]];
            max_sub_last_number = arr[i];
        }   
    }

    cout << ans << endl;

    vector<int> ans_seq;
    long long current_last_number = max_sub_last_number;

    for (int i = arr_length - 1; i >= 0; i--)
    {
        // if (current_last_number <= max_sub_last_number - ans)
        // {
        //     break;
        // }
        if (arr[i] == current_last_number)
        {
            ans_seq.push_back(i + 1);
            current_last_number--;
        }
    }
    reverse(ans_seq.begin(), ans_seq.end());

    for (auto number : ans_seq)
    {
        cout << number << " ";
    }
    
    return 0;
}