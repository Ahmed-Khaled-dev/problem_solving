/**
*    author:  Akayiz
*    created: 2023-07-26 19:22:52
**/

#include <iostream>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

// Definition : min_time[n][method(s, e)]
// Returns the minimum time to reach floor n from floor 1, given the method that was used from n-1 to n

// Base cases : min_time[1][s] = 0, min_time[1][e] = elevator_doors_time

// Transition/Backward formula : 
// min_time[n][s] = min(min_time[n - 1][s] + stair[n], min_time[n - 1][e] + stair[n)
// min_time[n][e] = min(min_time[n - 1][e] + elevator[n], min_time[n - 1][s] + elevator[n] + elevator overhead)

// Time to reach floor i from floor i - 1
int time_by_stairs[200005], time_by_elevators[200005];
int min_time[200005][3];

int main() {
    fast();

    int floors_count, elevator_doors_time;
    cin >> floors_count >> elevator_doors_time;

    // Stairs
    for (int i = 2; i <= floors_count; i++)
    {
        cin >> time_by_stairs[i];
    }

    // Elevator
    for (int i = 2; i <= floors_count; i++)
    {
        cin >> time_by_elevators[i];
    }

    // Floor, method (1 = stairs, 2 = elevator)
    min_time[1][1] = 0;
    min_time[1][2] = elevator_doors_time;
    cout << 0 << " ";
    for (int i = 2; i <= floors_count; i++)
    {
        min_time[i][1] = min(min_time[i - 1][1], min_time[i - 1][2]) + time_by_stairs[i];
        min_time[i][2] = min(min_time[i - 1][2] + time_by_elevators[i], min_time[i - 1][1] + time_by_elevators[i] + elevator_doors_time);
        
        cout << min(min_time[i][1], min_time[i][2]) << " ";
    }

    return 0;
}