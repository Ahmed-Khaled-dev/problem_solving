/**
*    author:  Akayiz
*    created: 2023-02-26 19:12:56
**/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

int main() {
    fast();

    string s, t;
    int potential_index = -1;
    bool found = 0;
    cin >> s >> t;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == t[0] && !found)
        {
            potential_index = i;
            for (int j = 1; j < t.length(); j++)
            {
                found = 1;
                if (s[i + j] != t[j])
                {
                    found = 0;
                    break;
                }
            }
        }
    }
    //cout << potential_index << endl;
    //cout << found << endl;
    if (found)
    {
        cout << max(potential_index, (int) (s.length() - (potential_index + t.length())));
    }
    else
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == t[0])
            {
                int sub_count = 0, other_count = 0;
                int went_in_other = 0, old_other = 0;
                sub_count++;
                for (int j = i + 1; j < s.length(); j++)
                {
                    if (s[j] == t[sub_count])
                    {
                        if (other_count != old_other)
                        {
                            if (went_in_other)
                            {
                                break;
                            }
                            else
                            {
                                went_in_other = 1;
                                old_other = other_count;
                            }
                        }
                        //cout << t[sub_count] << endl;
                        sub_count++;
                    }
                    else
                    {
                        other_count++;
                    } 
                }
                if (sub_count == t.length())
                {
                    cout << other_count;
                    break;
                } 
            }
        }
    }
    
    return 0;
}