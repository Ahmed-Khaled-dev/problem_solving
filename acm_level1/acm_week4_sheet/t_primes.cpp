/**
*    author:  Akayiz
*    created: 2023-09-16 00:05:46
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

int main() {
    Akayiz

    int n;
    cin >> n;

    ll number;
    while(n--){
        cin >> number;

        bool isprime = 1;
        
        double number_sqrt = sqrt(number);
        //cout << number_sqrt << " " << (int) number_sqrt << el;
        if((int) number_sqrt == number_sqrt && number != 1)
        {
            for (int i = 2; i*i <= number_sqrt; i++)
            {
                if((int) number_sqrt % i == 0)
                {
                    isprime = 0;
                    break;
                }
            }

            if(isprime)
                cout << "YES" << el;
            else
                cout << "NO" << el;
        }
        else
            cout << "NO" << el;
    }

    return 0;
}