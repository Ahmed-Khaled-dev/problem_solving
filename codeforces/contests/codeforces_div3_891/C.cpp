/**
*    author:  Akayiz
*    created: 2023-08-07 19:26:42
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

int arr[1005], compare[1005];
map<ll, int> freq, compare_freq;

int t, n;

void create_possibilities(vector<ll> distinct_nums, int idx, vector<ll> ans){
    
    for (int i = idx; i < n; i++)
    {
        for (auto num : distinct_nums)
        {
            ans.push_back(num);
            create_possibilities(distinct_nums, idx + 1, ans);
        }
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            compare[j - 1] = min(ans[i], ans[j]);
            compare_freq[compare[j - 1]]++;
        }
    }

    bool correct = 1;
    for (int i = 0; i < n; i++)
    {
        if(compare_freq[i] != freq[i])
            correct = 0;
    }

    if(correct == 1)
        exit;
}

vector<ll> ans;

int main() {
    Akayiz
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n;
        vector<ll> distinct_nums;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if(freq[arr[i]] == 0)
                distinct_nums.push_back(arr[i]);

            freq[arr[i]]++;
        }

        create_possibilities(distinct_nums, 0, ans);

        for (int i = 0; i < n; i++)
        {
            cout << compare[i] << " ";
        }
        cout << endl;
        
    }
    

    return 0;
}