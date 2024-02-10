/**
*    author:  Akayiz
*    created: 2024-01-05 04:18:30
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

int main() {
    Akayiz

    class Solution {
    public:
        vector<int> productExceptSelf(vector<int>& nums) {
            vector<int> answer;

            answer.push_back(1);

            for(int i = 1; i < nums.size(); i++){
                answer.push_back(nums[i - 1] * answer[i - 1]);
            }

            for(int i = answer.size() - 2; i >= 0; i--){
                answer[i] *= nums[i + 1];
                nums[i] *= nums[i + 1];
            }

            return answer;
        }
    };

    return 0;
}