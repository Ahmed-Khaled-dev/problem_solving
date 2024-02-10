/**
*    author:  Akayiz
*    created: 2024-02-10 14:37:30
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

int main() {
    Akayiz
    
    int t;
    cin >> t;
    
    long long a, b, r, temp_a, temp_b;
    long long ans;
    while(t--){
        cin >> a >> b >> r;
        temp_a = a;
        temp_b = b;
        ans = abs(a - b);

        string num1, num2;
        char bigger_num;

        if(a >= b){
            while(temp_a != 0){
                num1 += to_string(temp_a % 2);
                temp_a = temp_a / 2;

                num2 += to_string(temp_b % 2);
                temp_b = temp_b / 2;
            }
        }
        else{
            while(temp_b != 0){
                num1 += to_string(temp_b % 2);
                temp_b = temp_b / 2;

                num2 += to_string(temp_a % 2);
                temp_a = temp_a / 2;
            }
        }
        
        ll number_to_xor = 0;
        
        //cout << num1 << " " << num2 << el;


        for (int i = num1.size() - 1; i >= 0; i--)
        {
            if(num1[i] == '1' && num2[i] == '0'){
                //cout << number_to_xor + (1 << i) << endl;
                if(number_to_xor + (1 << i) <= r){
                    number_to_xor += (1 << i);
                    //cout << abs((max(a, b) - number_to_xor) - (min(a, b) + number_to_xor)) << " when a and b = " << a << "," << b << " ";
                    if(abs((max(a, b) - number_to_xor) - (min(a, b) + number_to_xor)) <= ans){
                        ans = abs((max(a, b) - number_to_xor) - (min(a, b) + number_to_xor));
                        if(number_to_xor * 2 > (a - b)){
                            number_to_xor -= (1 << i);
                        }
                    }
                    else
                        number_to_xor -= (1 << i);
                }
                else{
                    number_to_xor -= (1 << i);
                }
            }
        }
        
        cout << ans << el;
    }

    return 0;
}