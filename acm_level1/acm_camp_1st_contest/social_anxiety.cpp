#include <iostream>
#include <vector>

using namespace std;

// START OF CODEEEEE
const int N = 3e5+2;

bool vis[N];
int n, q, unread = 0, id=1, lastT = 1;
vector<int> a[N];

int main()
{
    cin>>n>>q;
    while(q--)
    {
        int op;
        cin>>op;

        if(op == 1)
        {
            int x;cin>>x;

            a[x].push_back(id);

            unread++;
            id++;
        }
        else if(op == 2)
        {
            int x;cin>>x;

            for(int i=0;i<a[x].size();i++)
            {
                int ntfID = a[x][i];

                if(!vis[ntfID])
                {
                    vis[ntfID] = 1;
                    unread--;
                }
            }

            a[x].clear();
        }
        else
        {
            int t;cin>>t;

            for(int i=lastT;i<=t;i++)
            {
                if(!vis[i])
                {
                    vis[i] = 1;
                    unread--;
                }
            }
            lastT = max(lastT, t);
        }
        cout<<unread<<endl;
    }
    return 0;
}