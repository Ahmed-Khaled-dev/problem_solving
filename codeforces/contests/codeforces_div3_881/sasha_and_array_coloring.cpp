/**
*    author:  Akayiz
*    created: 2023-06-20 17:42:27
**/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

int main() {
    fast();

    int t, arr_size, number;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> arr_size;
        vector<int> arr;
        for (int i = 0; i < arr_size; i++)
        {
            cin >> number;
            arr.push_back(number);
        }
        sort(arr.begin(), arr.end());
        int index = 0;
        long long sum = 0;
        while (index <= (arr_size - (index + 1)))
        {
            sum += (arr[arr_size - (index + 1)] - arr[index]);
            //cout << arr[arr_size - (index + 1)] << " " << arr[index] << endl;
            index++;
            //cout << sum << " " << index << endl;
        }
        
        cout << sum << endl;
    }
    

    return 0;
}