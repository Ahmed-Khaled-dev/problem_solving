/**
*    author:  Akayiz
*    created: 2023-10-25 22:20:35
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

multiset<int> right_asc;
multiset<int> left_asc;

int main() {
    Akayiz

    int q;
    cin >> q;

    int l, r;
    char operation;
    while(q--){
        cin >> operation;
        cin >> l >> r;
        switch(operation){
            case '+':
                left_asc.insert(l);
                right_asc.insert(r);
            break;
            case '-':
                // Find in multiset works in log(n), like in map
                left_asc.erase(left_asc.find(l));
                right_asc.erase(right_asc.find(r));
            break;
        }

        if(right_asc.size() != 0 && left_asc.size() != 0)
        {
            if(*left_asc.rbegin() > *right_asc.begin())
                cout << "YES" << el;
            else
                cout << "NO" << el;
        }
        else
            cout << "NO" << el; 
    }

    return 0;
}