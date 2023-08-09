/**
*    author:  Akayiz
*    created: 2023-08-07 17:46:32
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

int number_as_int[200005] = {};

int main() {
    Akayiz

    int tests;
    cin >> tests;

    string number_as_string;
    for (int t = 0; t < tests; t++)
    {
        cin >> number_as_string;
        int zeros_starting_form_here = 1000000;

        for (int i = 0; i < number_as_string.length(); i++)
        {
            number_as_int[i] = number_as_string[i] - '0'; 
        }
        
        for (int i = number_as_string.size() - 2; i >= 0; i--)
        {
            if(number_as_int[i + 1] >= 5)
            {
                if(number_as_int[i + 1] == 9)
                    number_as_int[i] += 1;
                else
                    number_as_int[i] += 1;

                zeros_starting_form_here = i + 1;
            }
        }

        if(number_as_int[0] >= 5)
        {
            number_as_int[0] = 10;
            zeros_starting_form_here = 1;
        }

        for (int i = 0; i < number_as_string.size(); i++)
        {
            if(zeros_starting_form_here <= i)
                cout << 0;
            else
                cout << number_as_int[i];
        }
        cout << endl;
    }
    

    return 0;
}