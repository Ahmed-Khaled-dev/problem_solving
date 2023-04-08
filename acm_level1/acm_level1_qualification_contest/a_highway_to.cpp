/**
*    author:  Akayiz
*    created: 2023-02-21 22:31:57
**/

#include <iostream>
#include <map>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

map<long long, long long> speed_limits;

int main() {
    fast();

    // spl = speed limit
    long long road_length, initial_spl, spot, new_spl, minimum_hours;
    cin >> road_length >> initial_spl;

    int queries_count, query_type;
    cin >> queries_count;

    map<long long, long long>::iterator it;
    for (int i = 0; i < queries_count; i++)
    {
        cin >> query_type;
        minimum_hours = 0;
        switch (query_type)
        {
        case 1:
            cin >> spot >> new_spl;
            speed_limits[spot] = new_spl;
            break;
        case 2:
            cin >> spot;
            speed_limits.erase(spot);
            break;
        }
        
        
        long long current_spl = initial_spl, last_spot = 0;
        for (it = speed_limits.begin(); it != speed_limits.end(); it++)
        { 
            minimum_hours += (current_spl * (it->first - last_spot));
            current_spl = it->second;
            last_spot = it->first;
        }
        minimum_hours += (current_spl * (road_length - last_spot));

        cout << minimum_hours << endl;
    }

    return 0;
}