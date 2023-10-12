#include <iostream>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

void fast(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main(){
    fast();
    int t;
    cin >> t;

    char letter, correct_letter;
    string alphabet_input, original_s;
    
    for (int i = 0; i < t; i++)
    {
        map<char, int> alphabet = {};
        char sorted_s[1000005] = {};

        cin >> alphabet_input;
        for (int j = 1; j <= 26; j++)
        {
            alphabet[(char) (alphabet_input[j - 1])] = j;
        }
        
        cin >> original_s;
        for (long long j = 0; j < original_s.length(); j++)
        {
            correct_letter = (char) (alphabet[original_s[j]] + ((int) 'a' - 1));
            sorted_s[j] = correct_letter;
        }

        sort(sorted_s, sorted_s + original_s.length()); 
        
        for (long long j = 0; j < original_s.length(); j++)
        {
            //cout << "Sorted = " << sorted_s[j] << endl;
            //cout << "Original = " << alphabet_input[(int) sorted_s[j] - ((int) 'a')] << endl;
            correct_letter = (alphabet_input[(int) sorted_s[j] - ((int) 'a')]);
            sorted_s[j] = correct_letter;
        }

        long long sum = 0;
        for (long long j = 0; j < original_s.length(); j++)
        {
            if (sorted_s[j] != original_s[j])
            {
                sum++;
            }
        }
        
        cout << sum << endl;
    }
}