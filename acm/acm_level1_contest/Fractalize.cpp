#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <numeric>
#include <cmath>

using namespace std;

void fast(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int list[100005];

int main(){
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> list[i];
    }

    long long answer = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int common_divisor = gcd(list[i], list[j]);
            //cout << list[i] << " " << list[j] << " " << common_divisor << endl;
            //cout << list[i] / common_divisor << " " << list[j] / common_divisor << endl;
            answer = min(answer, (long long) (abs((list[i] / common_divisor) - (list[j] / common_divisor))));   
        }
    }

    cout << answer;
    
}