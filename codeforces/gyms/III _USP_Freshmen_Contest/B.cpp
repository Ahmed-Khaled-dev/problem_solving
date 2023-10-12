/**
*    author:  Akayiz
*    created: 2023-07-25 11:25:11
**/

#include <iostream>
#include <cmath>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

int main() {
    fast();

    long long x,y,a,b;
    cin>>x>>y>>a>>b;
    if(sqrt(x*x + y*y ) > sqrt(a*a + b*b) ){
        cout<<"Wil";
    }
    else if(sqrt(x*x + y*y ) < sqrt(a*a + b*b) ){
        cout<<"Russo";

    }
    else{
        cout<<"Empate";
    }
    return 0;
}