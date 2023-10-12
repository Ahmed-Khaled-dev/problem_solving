/**
*    author:  Akayiz
*    created: 2023-07-25 17:56:01
**/

#include <iostream>

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

    long long passengers_count, steps_count, steps_difference, vlad_height;
    for (int i = 0; i < t; i++)
    {
        cin >> passengers_count >> steps_count >> steps_difference >> vlad_height;
        long long conversations_count = 0, passenger_height;

        for (int j = 0; j < passengers_count; j++)
        {
            cin >> passenger_height;
            long long abs_difference = abs(passenger_height - vlad_height);
            if ((abs_difference % steps_difference == 0) 
            && (abs_difference <= ((steps_count*steps_difference) - steps_difference)) 
            && abs_difference != 0)
            {
                conversations_count++;
            }
        }
        
        cout << conversations_count << endl;
    }
    

    return 0;
}