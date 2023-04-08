/**
*    author:  Akayiz
*    created: 2023-02-12 22:00:18
**/

#include <iostream>
#include <map>
#include <cmath>
#include <iomanip>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

multimap<double, int> locations;

int main() {
    fast();

    int locations_count, island_population, location_x, location_y, location_population;
    cin >> locations_count >> island_population;
    long long population_sum = island_population;

    for (int i = 0; i < locations_count; i++)
    {
        cin >> location_x >> location_y >> location_population;
        locations.insert({sqrt(pow(abs(location_x), 2) + pow(abs(location_y), 2)), location_population});
    }

    multimap<double, int>::iterator it;

    for (it = locations.begin(); it != locations.end(); it++)
    {
        //cout << it->first << " " << it->second << endl;
        population_sum += it->second;
        if (population_sum >= 1000000)
        {
            cout << fixed << setprecision(7) << it->first;
            return 0;
        }
    }
    
    cout << -1;

    return 0;
}