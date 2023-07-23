/**
*    author:  Akayiz
*    created: 2023-07-22 15:22:11
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

    int t;
    cin >> t;

    unsigned long long paintings_count, cardboard_used;

    for (int i = 0; i < t; i++)
    {
        cin >> paintings_count >> cardboard_used;
        unsigned long long paintings_sizes[200005] = {};
        unsigned long long summation_sides = 0, summation_paintings_areas = 0;
        for (int j = 0; j < paintings_count; j++)
        {
            cin >> paintings_sizes[j];
            summation_sides += paintings_sizes[j];
            summation_paintings_areas += paintings_sizes[j] * paintings_sizes[j];
        }
        
        unsigned long long a = 4 * paintings_count, b = 4 * summation_sides;
        unsigned long long c = cardboard_used - summation_paintings_areas;

        unsigned long long low = 1, high = 10000000000, mid, answer;

        //cout << "c = " << c << endl;
        while (low <= high)
        {
            mid = (low + high) / 2;
            //cout << mid << " " << endl;
            if (((paintings_count * mid) + (summation_sides)) == ((cardboard_used - summation_paintings_areas) / (4 * mid)))
            {
                answer = mid;
                break;
            }
            else if (((paintings_count * mid) + (summation_sides)) < ((cardboard_used - summation_paintings_areas) / (4 * mid)))
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }

        cout << answer << endl;
    }
    return 0;
}