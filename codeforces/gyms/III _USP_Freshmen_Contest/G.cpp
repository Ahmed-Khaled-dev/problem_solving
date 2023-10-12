/**
*    author:  Akayiz
*    created: 2023-07-25 12:14:05
**/

#include <iostream>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}
long long a[5],n,x,bb;
string s ="DABC";
int main() {
    fast();
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        a[i%4]+=x;
    }
        pair<long long ,long long> q;
        q.first=0;q.second=1;
    for(int i=1;i<4;i++)
    {
            if (a[i]>q.first)
            {
                
                q.first=a[i];
                q.second=i;
            }


    }
               if(a[0]>q.first){
            cout<<"D\n";
           } 
           else{cout<<s[q.second]<<"\n";}

    return 0;
}