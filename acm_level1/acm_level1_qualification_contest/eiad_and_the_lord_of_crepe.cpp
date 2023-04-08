/**
*    author:  Akayiz
*    created: 2023-02-21 19:13:14
**/

#include <iostream>
#include <map>
#include <iomanip>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

multimap<double, pair<double, double>> dishes;
int cost[10005];
int weight[10005];

int main() {
    fast();

    int dishes_count, max_grams, dish_cost, dish_weight;
    cin >> dishes_count >> max_grams;

    for (int i = 0; i < dishes_count; i++)
    {
        cin >> weight[i];
        
    }   
    for (int i = 0; i < dishes_count; i++)
    {
        cin >> cost[i];
    }   

    for (int i = 0; i < dishes_count; i++)
    {
        dishes.insert({((double) cost[i]/weight[i]) * -1, {cost[i], weight[i]}});
    }   
    
    multimap<double, pair<double, double>>::iterator it;

    int current_grams = max_grams;
    double current_cost = 0;
    for (it = dishes.begin(); it != dishes.end(); it++)
    {
        //cout << it->first << " " << it->second.first << " " << it->second.second << " " << endl;
        //cout << current_grams << " " << current_cost << endl;
        if (current_grams - (it->second.second) >= 0)
        {
            current_grams -= it->second.second;
            current_cost += it->second.first;
        }
        else
        {
            current_cost += ((current_grams/it->second.second) * it->second.first);
            //cout << current_grams << " " << current_cost << endl;
            break;
        }
    }

    cout << fixed << setprecision(4) << current_cost;

    return 0;
}