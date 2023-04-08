#include <iostream>
#include <deque>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

deque<int> children;
deque<int> children_indices;

int main() {
    fast();

    int children_count, candies_given, child_candies_request;
    cin >> children_count >> candies_given;

    for (int i = 1; i <= children_count; i++)
    {
        cin >> child_candies_request;
        children.push_back(child_candies_request);
        children_indices.push_back(i);
    }
    
    while (children.size() != 1)
    {
        if (candies_given - children.front() >= 0)
        {
            children.pop_front();
            children_indices.pop_front();
        }
        else
        {
            children.push_back(children.front() - candies_given);
            children_indices.push_back(children_indices.front());
            children.pop_front();
            children_indices.pop_front();
        }
    }

    cout << children_indices.front();

    return 0;
}
