/**
*    author:  Akayiz
*    created: 2023-09-15 20:07:07
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

	ll digits_count;
	while(t--){
		cin >> digits_count;
		ll digit;
		
		ll ans = 0;
		for (int i = 0; i < digits_count; i++)
		{
			cin >> digit;
			ans ^= digit;
		}
		cout << ans << el;
	}

	return 0;
}