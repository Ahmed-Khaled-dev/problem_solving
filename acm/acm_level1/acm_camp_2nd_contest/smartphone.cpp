/**
*    author:  Akayiz
*    created: 2023-02-14 22:11:29
**/

#include <iostream>
#include <queue>
#include <map>
using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

deque<long long> friends;
map<int, bool> friends_on_screen;

int main() {
    fast();

    int n, k, friend_id;
    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        cin >> friend_id;
        if (friends_on_screen[friend_id] == 0)
        {
            friends_on_screen[friend_id] = 1;
            friends.push_front(friend_id);   
            if (friends.size() > k)
            {
                friends_on_screen[friends.back()] = 0;
                friends.pop_back();
            }
            //cout << "hello";
        }   
    }

    cout << friends.size() << endl;
    int size = friends.size();
    for (int i = 0; i < size; i++)
    {
        cout << friends.front() << " ";
        friends.pop_front();
    }
    return 0;
}