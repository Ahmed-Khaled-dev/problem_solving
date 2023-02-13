/**
*    author:  Akayiz
*    created: 2023-02-12 22:47:17
**/

#include <iostream>
#include <map>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

map<int, int> apps;

int main() {
    fast();

    int apps_count, events_count, event_type, x;
    long long total_notifications = 0;
    cin >> apps_count >> events_count;

    for (int i = 0; i < events_count; i++)
    {
        cin >> event_type;
        switch (event_type)
        {
        case 1:
            cin >> x;
            total_notifications++;
            break;
        case 2:
            cin >> x;
            total_notifications -= apps[x];
            apps[x] = 0;
            break;
        case 3:
            cin >> x;
            total_notifications -= x;
            break;
        }

        cout << total_notifications << endl;
    }
    
    
    return 0;
}