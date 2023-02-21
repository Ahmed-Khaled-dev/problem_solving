/**
*    author:  Akayiz
*    created: 2023-02-21 20:53:51
**/

#include <iostream>
#include <algorithm>
//#include <map>
#include <vector>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

//multimap<int, int> factors;
vector<pair<int, int>> factors;

int main() {
    fast();

    int n, original_element, counter;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> original_element;
        int element = original_element;
        for (int j = 2; j*j <= element; j++)
        {
            counter = 0;
            while (element % j == 0)
            {
                element /= j;
                if (counter == 0)
                {
                    factors.push_back({j, original_element});
                }
                counter++;
            }
        }

        if (element != 1 && element != 0)
        {
            factors.push_back({element, original_element});
        }
    }

    sort(factors.begin(), factors.end());

    //multimap<int, int>::iterator it;
    int current_factor = 2, factor_frequency = 0;
    long long sum = 0, maxi = -1;
    for (int i = 0; i < factors.size(); i++)
    {
        //cout << it->first << " " << it->second << endl;
        if (current_factor == factors[i].first)
        {
            sum += factors[i].second;
            factor_frequency++;
        }
        else
        {
            if (factor_frequency > 1)
            {
                maxi = max(sum, maxi);
            }
            sum = 0;
            factor_frequency = 0;
            sum += factors[i].second;
            current_factor = factors[i].first;
            factor_frequency++;
        }

        if (factor_frequency > 1)
        {
            maxi = max(sum, maxi);
        }
    }
    
    cout << maxi;
    return 0;
}