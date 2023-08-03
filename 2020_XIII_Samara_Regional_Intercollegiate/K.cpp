/**
*    author:  Akayiz
*    created: 2023-07-28 15:08:24
**/

#include <iostream>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}
long long a,b,c,d;
int main() {
    fast();
    cin>>a>>b>>c>>d;
    if(a+b==c+d || a+c==b+d || a+d == b+c)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;

    

    return 0;
}