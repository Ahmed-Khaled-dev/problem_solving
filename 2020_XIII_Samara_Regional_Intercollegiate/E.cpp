/**
*    author:  Akayiz
*    created: 2023-07-28 15:03:23
**/

#include <iostream>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

int main() {
    fast();
    int n;
    cin>>n;
    long long t=0,final=0;

    while(n--){

        long long x;
        cin>>x;
        t+=x;
        if(t<0 && t <-1 * final){
            final = -1 * t;
        }
    }
    cout<<final<<"\n";

    return 0;
}