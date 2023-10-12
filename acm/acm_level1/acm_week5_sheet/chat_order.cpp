/**
*    author:  Akayiz
*    created: 2023-02-12 15:32:43
**/

#include <iostream>
#include <stack>
#include <map>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

stack<string> all_recipents;
map<string, bool> recipents_visited;

int main() {
    fast();

    int messages_count;
    string recipent;

    cin >> messages_count;

    for (int i = 0; i < messages_count; i++)
    {
        cin >> recipent;
        all_recipents.push(recipent);
        recipents_visited[recipent] = 1;
    }
    
    for (int i = 0; i < messages_count; i++)
    {
        if (recipents_visited[all_recipents.top()] == 1)
        {
            cout << all_recipents.top() << endl;
            recipents_visited[all_recipents.top()] = 0;
        }
        all_recipents.pop();  
    }

    return 0;
}