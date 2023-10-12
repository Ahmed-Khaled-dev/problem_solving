/**
*    author:  Akayiz
*    created: 2023-07-28 15:39:42
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
int t;
cin>>t;
    long long x,y,final=0;
    cin>>x>>y;
    final += x + y;
    t--;
while(t--){
        cin>>x>>y;
        if(final > x){
            final +=y;
        }
        else{
            final += ( (x-final ) + y );
        }

}
    cout<<final;

    return 0;
}