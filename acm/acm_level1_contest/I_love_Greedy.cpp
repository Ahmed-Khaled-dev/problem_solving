#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <vector>

using namespace std;

void fast(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

map<char, vector<int>> letter_indexes = {};

int main(){
    fast();
    long long n, q;
    cin >> n;

    string letters;
    cin >> letters;

    for (long long i = 0; i < n; i++)
    {
        letter_indexes[letters[i]].push_back(i);
    }
    
    cin >> q;
    char letter;
    unsigned long long group, sum = 0;
    for (long long i = 0; i < q; i++)
    {
        cin >> letter;
        group = 0;
        for (long long j = 0; j < letter_indexes[letter].size(); j++)
        {
            //cout << (letter_indexes[letter][j+1] - letter_indexes[letter][j] - 1) << endl;
            sum += letter_indexes[letter][j];
        }
        if (letter_indexes[letter].size() > 0)
        {
            long double average = (double) sum / (double) letter_indexes[letter].size();
            long long mid, low = 0, high = letter_indexes[letter].size() - 1, ans_index = 0;
            long double ans = 1000000000;
            while (low <= high)
            {
                mid = (low + high) / 2;
                double abs_difference = abs(letter_indexes[letter][mid] - average);
                //cout << "abs = " << abs_difference << endl;
                if (average > letter_indexes[letter][mid])
                {
                    if (abs_difference < (abs(ans - average)))
                    {
                        // cout << mid << endl;
                        // cout << letter_indexes[letter][mid] << endl;
                        ans = letter_indexes[letter][mid];
                        ans_index = mid;
                    }
                    low = mid + 1;
                }
                else if (letter_indexes[letter][mid] > average)
                {
                    if (abs_difference < (abs(ans - average)))
                    {
                        // cout << mid << endl;
                        // cout << letter_indexes[letter][mid] << endl;
                        ans = letter_indexes[letter][mid];
                        ans_index = mid;
                    }
                    high = mid - 1;
                }
                else
                {
                    ans = letter_indexes[letter][mid];
                    ans_index = mid;
                    break;
                }
            }
            //cout << letter_indexes[letter].size() << endl;
            for (long long j = 0; j < letter_indexes[letter].size(); j++)
            {
                //cout << (letter_indexes[letter][j+1] - letter_indexes[letter][j] - 1) << endl;
                if (ans != letter_indexes[letter][j])
                {
                    //cout << ans << " " << letter_indexes[letter][j] << endl;
                    group += abs(ans - letter_indexes[letter][j]) - 1;
                    group -= abs(ans_index - j) - 1;
                }
            }
            cout << group << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
}