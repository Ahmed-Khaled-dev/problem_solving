/**
*    author:  Akayiz
*    created: 2023-05-12 19:23:30
**/

#include <iostream>
#include <map>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

int arr[300005];

int main() {
    fast();

    long long t, arr_size;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> arr_size;
        map<long long, int> numbers_freq = {};
        for (long long i = 0; i < arr_size; i++)
        {
            cin >> arr[i];
            numbers_freq.insert({arr[i], numbers_freq[arr[i]]++});
        }
        int current_length = arr_size;

        for (auto i : numbers_freq)
        {
            if (i.second != 1){
                current_length -= i.second;
            }
        }
        if (current_length == 0)
        {
            current_length = 1;
        }
        
        cout << current_length << endl;
    }

    return 0;
}