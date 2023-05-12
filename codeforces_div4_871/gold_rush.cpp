/**
*    author:  Akayiz
*    created: 2023-05-11 22:28:16
**/

#include <iostream>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

long long starting_nuggets_count, target_nuggets_count;
string answer = "";
void check_nuggets(long long current_nuggets){ 
    //cout << current_nuggets << endl;
    if (current_nuggets == target_nuggets_count)
    {
        answer = "Yes";
        exit;
    }
    if (current_nuggets % 3 != 0)
    {
        return;
    }
    
    current_nuggets /= 3;
    //cout << current_nuggets << endl;
    check_nuggets(current_nuggets);
    check_nuggets(current_nuggets * 2);
}

int main() {
    fast();

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        answer = "";
        cin >> starting_nuggets_count >> target_nuggets_count;
        long long current_nuggets = starting_nuggets_count;
        check_nuggets(current_nuggets);
        if (answer == "Yes")
        {
            cout << answer << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}