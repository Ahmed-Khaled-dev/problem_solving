/**
*    author:  Akayiz
*    created: 2023-10-09 18:03:43
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

    double px, py, ax, ay, bx, by;

    while(t--){
        cin >> px >> py >> ax >> ay >> bx >> by;
        double ans = 1e10;
        
        if(sqrt((ax - px)*(ax - px) + (ay - py)*(ay - py)) > sqrt((ax - 0)*(ax - 0) + (ay - 0)*(ay - 0)))
            ans = min(ans, sqrt((ax - px)*(ax - px) + (ay - py)*(ay - py)));
        else
            ans = min(ans, sqrt((ax - 0)*(ax - 0) + (ay - 0)*(ay - 0)));

        if(sqrt((bx - px)*(bx - px) + (by - py)*(by - py)) > sqrt((bx - 0)*(bx - 0) + (by - 0)*(by - 0)))
            ans = min(ans, sqrt((bx - px)*(bx - px) + (by - py)*(by - py)));
        else
            ans = min(ans, sqrt((bx - 0)*(bx - 0) + (by - 0)*(by - 0)));

        if(sqrt((ax - px)*(ax - px) + (ay - py)*(ay - py)) > sqrt((bx - px)*(bx - px) + (by - py)*(by - py)))
        {
            if(sqrt((bx - px)*(bx - px) + (by - py)*(by - py)) > sqrt((ax - 0)*(ax - 0) + (ay - 0)*(ay - 0)))
            {
                if(sqrt((bx - px)*(bx - px) + (by - py)*(by - py)) * 2 >= sqrt((ax - bx)*(ax - bx) + (ay - by)*(ay - by)))
                    ans = min(ans, sqrt((bx - px)*(bx - px) + (by - py)*(by - py)));
                else
                    ans = min(ans, sqrt((ax - bx)*(ax - bx) + (ay - by)*(ay - by)) / 2.0);
            }
            else
            {
                if(sqrt((ax - 0)*(ax - 0) + (ay - 0)*(ay - 0)) * 2 >= sqrt((ax - bx)*(ax - bx) + (ay - by)*(ay - by)))
                    ans = min(ans, sqrt((ax - 0)*(ax - 0) + (ay - 0)*(ay - 0)));
                else
                    ans = min(ans, sqrt((ax - bx)*(ax - bx) + (ay - by)*(ay - by)) / 2.0);
            }
        }
        else
        {
            if(sqrt((ax - px)*(ax - px) + (ay - py)*(ay - py)) > sqrt((bx - 0)*(bx - 0) + (by - 0)*(by - 0)))
            {
                if(sqrt((ax - px)*(ax - px) + (ay - py)*(ay - py)) * 2 >= sqrt((ax - bx)*(ax - bx) + (ay - by)*(ay - by)))
                    ans = min(ans, sqrt((ax - px)*(ax - px) + (ay - py)*(ay - py)));
                else
                    ans = min(ans, sqrt((ax - bx)*(ax - bx) + (ay - by)*(ay - by)) / 2.0);
            }
            else
            {
                if(sqrt((bx - 0)*(bx - 0) + (by - 0)*(by - 0)) * 2 >= sqrt((ax - bx)*(ax - bx) + (ay - by)*(ay - by)))
                    ans = min(ans, sqrt((bx - 0)*(bx - 0) + (by - 0)*(by - 0)));
                else
                    ans = min(ans, sqrt((ax - bx)*(ax - bx) + (ay - by)*(ay - by)) / 2.0);
            }
        }

        cout << fixed << setprecision(10) << ans << el;
    }

    return 0;
}