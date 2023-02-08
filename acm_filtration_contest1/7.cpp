#include <iostream>

using namespace std;
long long n,q,x,y,arr[2006][2006],prer[2006],prec[2006],tempr,tempc;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
            cin>>n;

            for(long long i=0;i<n;i++){
                for(long long j=0;j<n;j++){
                    cin>>arr[i][j];
                }
            }

            tempc=arr[0][0];
            tempr=arr[0][0];
            
            //cout << tempc << "\n" << tempr;
            
            for(int i = 0; i<n ;i++){
                for(int j = 1;j <= n;j++){
                    if(arr[i][j]>tempr)
                    {
                        prer[i]=arr[i][j];
                        tempr=arr[i][j];
                    }
                    else
                    {
                    prer[i]=tempr;
                    }
                }
            }

             for(int i=0;i<n;i++){
                for(int j=1;j<n;j++){
                    if(arr[j][i]>tempc){
                        prec[i]=arr[i][j];
                        tempc=arr[j][i];
                    }else{
                    prec[i]=tempc;
                    }
                }
            }

            cin>>q;
            while(q--){
                cin>>x>>y;
                cout<<prer[x]<<" "<<prec[y]<<"\n";
            }
    return 0;
}