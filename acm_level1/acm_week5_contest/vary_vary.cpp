#include <iostream>
#include <string>
#include <map>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

string strings[100005];
map<long long, long long> variations_count;
long long sum_variations = 0;

int main() {
    fast();

    variations_count[0] = 0;
    long long n;
    string test_string;
    cin >> n;

    for (long long i = 0; i < n; i++)
    {
        cin >> strings[i];
    }

    for (long long i = 0; i < n; i++)
    {
        for (long long j = i + 1; j < n; j++)
        {
            if (strings[j].size() == strings[i].size())
            {
                for (long long k = 0; k < strings[j].size() - 1; k++)
                {
                    for (long long u = k + 1; u < strings[j].size(); u++)
                    {   
                        test_string = strings[j];
                        if (test_string[k] == test_string[u])
                        {
                            continue;
                        }
                        swap(test_string[k], test_string[u]);
                        if (test_string == strings[i])
                        {
                            variations_count[i]++;
                            variations_count[j]++;
                        }
                    }
                }
            }
        }
    }

    map<long long,long long>::iterator it;

    for (it = variations_count.begin(); it != variations_count.end(); it++)
    {
        sum_variations += it->second;
    }
    
    cout << sum_variations;
    

    return 0;

    // cout << "i = " << i << endl;
    // cout << "j = " << j << endl;
    // cout << "k = " << k << endl;
    // cout << "u = " << u << endl;
    // cout << strings[i] << endl;
    // cout << strings[j] << endl;
    // cout << test_string << endl;
}