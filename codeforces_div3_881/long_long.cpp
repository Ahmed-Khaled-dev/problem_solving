/**
*    author:  Akayiz
*    created: 2023-06-20 18:00:40
**/

#include <iostream>
#include <vector>
#include <cmath>

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

    for (long long i = 0; i < t; i++)
    {
        vector<long long> numbers;
        long long size, number, sum = 0, min_operations_count = 0;
        cin >> size;

        for (long long j = 0; j < size; j++)
        {
            cin >> number;
            numbers.push_back(number);
            sum += abs(number);
        }
        
        bool in_negative_sub_array = 0;

        for (long long j = 0; j < size; j++)
        {
            if (numbers[j] <= 0)
            {
                if (!in_negative_sub_array && numbers[j] != 0)
                {
                    min_operations_count++;
                    in_negative_sub_array = 1;
                }  
            }
            else
            {
                in_negative_sub_array = 0;
            }
            
        }
        cout << sum << " " << min_operations_count << endl;
    }
    
    return 0;
}