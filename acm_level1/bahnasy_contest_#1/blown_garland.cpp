/**
*    author:  Akayiz
*    created: 2023-02-24 20:23:34
**/

#include <iostream>
#include <map>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

int main() {
    fast();

    int dead_r = 0, dead_g = 0, dead_b = 0, dead_y = 0;
    bool bulb_not_fixed = 0;
    string bulbs;

    cin >> bulbs;

    for (int i = 0; i < bulbs.length() - 3; i++)
    {
        map<char, int> frequency = {};

        for (int j = i; j < i + 4; j++)
        {
            frequency[bulbs[j]]++;
        }

        for (int j = i; j < i + 4; j++)
        {
            //cout << "j = " << j << endl;
            //cout << "bulb = " << bulbs[j] << endl;
            if (bulbs[j] == '!')
            {
                if (frequency['R'] == 0 && (bulbs[j + 4] == 'R' || bulbs[j - 4] == 'R'))
                {
                    dead_r++;
                    bulbs[j] = 'R';
                    //frequency['R']++;
                }
                else if (frequency['G'] == 0 && (bulbs[j + 4] == 'G' || bulbs[j - 4] == 'G'))
                {
                    dead_g++;
                    bulbs[j] = 'G';
                    //frequency['G']++;
                }
                else if (frequency['B'] == 0 && (bulbs[j + 4] == 'B' || bulbs[j - 4] == 'B'))
                {
                    dead_b++;
                    bulbs[j] = 'B';
                    //frequency['B']++;
                }
                else if (frequency['Y'] == 0 && (bulbs[j + 4] == 'Y' || bulbs[j - 4] == 'Y')) 
                {
                    dead_y++;
                    bulbs[j] = 'Y';
                    //frequency['Y']++;
                }
                else
                {
                    bulb_not_fixed = 1;
                }
            }    
        }
    }

    if (bulb_not_fixed)
        {
            for (int j = 0; j < bulbs.length() - 3; j++)
            {
                if (bulbs[j] == '!')
                {
                    if (bulbs[j + 4] == 'R' || bulbs[j - 4] == 'R')
                    {
                        dead_r++;
                        bulbs[j] = 'R';
                        //frequency['R']++;
                    }
                    else if (bulbs[j + 4] == 'G' || bulbs[j - 4] == 'G')
                    {
                        dead_g++;
                        bulbs[j] = 'G';
                        //frequency['G']++;
                    }
                    else if (bulbs[j + 4] == 'B' || bulbs[j - 4] == 'B')
                    {
                        dead_b++; 
                        bulbs[j] = 'B';
                        //frequency['B']++;
                    }
                    else if (bulbs[j + 4] == 'Y' || bulbs[j - 4] == 'Y') 
                    {
                        dead_y++;
                        bulbs[j] = 'Y';
                        //frequency['Y']++;
                    }
                }
            }
        }

    cout << dead_r << " " << dead_b << " " << dead_y << " " << dead_g;

    return 0;
}