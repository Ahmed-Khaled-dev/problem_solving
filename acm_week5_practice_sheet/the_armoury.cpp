#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    long long weapons_count, armoury_size;
    cin >> weapons_count >> armoury_size;

    long long weapon_strength, weapon_size;
    string weapon_name;

    multimap<pair<long long, long long>, string> weapon;
    //vector<pair<pair<long long, long long>, string>> weapon2;

    for (long long i = 0; i < weapons_count; i++)
    {
        cin >> weapon_name >> weapon_strength >> weapon_size;
        weapon.insert(pair<pair<long long, long long>, string>({weapon_size, (weapon_strength * -1)}, weapon_name));
        //weapon2.push_back({{weapon_size, weapon_strength}, weapon_name});
    }

    multimap<pair<long long, long long>, string>::iterator it;

    long long int total_strength = 0, total_size = 0;
    vector<string> choosen_weapons;
    
    for (it = weapon.begin(); it != weapon.end(); it++)
    {
        //cout << it->first.first << " " << it->first.second << " " << it->second << endl;

        long long current_weapon_size = it->first.first;
        long long current_weapon_strength = it->first.second;
        string current_weapon_name = it->second;
        if (total_size + current_weapon_size <= armoury_size)
        {
            total_strength += (current_weapon_strength * -1);
            total_size += current_weapon_size;
            choosen_weapons.push_back(current_weapon_name);

            //cout << total_strength << endl;
            //cout << it->second << endl;
        }
        else
        {
            break;
        }
    }

    cout << total_strength << endl;
    if (total_strength != 0)
    {
        for (long long i = 0; i < choosen_weapons.size(); i++)
        {
            cout << choosen_weapons[i] << " ";
        }
    }
    
    // sort(weapon2.begin(), weapon2.end());
    // for (int i = 0; i < weapon2.size(); i++)
    // {
    //     cout << weapon2[i].first.first << " " << weapon2[i].first.second << " " << weapon2[i].second << endl;
    // }
    
}