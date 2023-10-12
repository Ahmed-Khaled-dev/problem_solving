/**
*    author:  Akayiz
*    created: 2023-09-11 00:55:42
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

ll arr[100005];
ll prefix_xor[100005];

int main() {
    Akayiz

    int t;
    cin >> t;

    int n, q;
    string binary;
    while(t--){
        cin >> n;
        int xor_1 = 0, xor_0 = 0;
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        
        cin >> binary;
        cin >> q;
        
        int type, left, right, digit;
        
        for (int i = 0; i < binary.size(); i++)
        {
            //cout << binary[i] << endl;
            if(binary[i] == '1'){
                xor_1 ^= arr[i];
                //cout << arr[i] << " XOR 1 = " << xor_1 << endl;
            }
            else
            {
                xor_0 ^= arr[i];
                //cout << arr[i] << " XOR 0 = " << xor_0 << endl;
            }
        }
        
        prefix_xor[0] = arr[0];
        for (int i = 1; i < n; i++)
        {
            prefix_xor[i] = prefix_xor[i - 1] ^ arr[i];
        }
        
        while (q--)
        {    
            cin >> type;
            switch (type)
            {
            case 1:
                cin >> left >> right;
                xor_1 = xor_1 ^ (prefix_xor[right - 1] ^ prefix_xor[left - 2]);
                xor_0 = xor_0 ^ (prefix_xor[right - 1] ^ prefix_xor[left - 2]);
                break;
            case 2:
                cin >> digit;
                if(digit)
                    cout << xor_1 << " ";
                else
                    cout << xor_0 << " ";
                break;
            }
        }
        cout << el;
    }

    return 0;
}