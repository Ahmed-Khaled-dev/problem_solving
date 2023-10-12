/**
*    author:  Akayiz
*    created: 2023-07-21 18:20:05
**/

#include <iostream>
#include <numeric>
#include <algorithm>
#include <cmath>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

int main() {
    fast();

    int t;
    cin >> t;

    unsigned long long int paintings_count, cardboard_used;
    for (int i = 0; i < t; i++)
    {
        cin >> paintings_count >> cardboard_used;
        int paintings_sizes[200005] = {};
        unsigned long long int summation_sides = 0, summation_paintings_areas = 0;
        for (int j = 0; j < paintings_count; j++)
        {
            cin >> paintings_sizes[j];
            summation_sides += paintings_sizes[j];
            summation_paintings_areas += paintings_sizes[j] * paintings_sizes[j];
        }
        
        long long int a = 4 * paintings_count, b = 4 * summation_sides, c = cardboard_used - summation_paintings_areas;
        long long int simplify = __gcd(a, b);
        simplify = __gcd(simplify, c);
        a /= simplify, b /= simplify, c /= simplify;

        long long int answer = toupper((-b + sqrt((b*b) + (4 * a * c))) / (2.0 * a));

        cout << answer << endl;
    }
    

    return 0;
}