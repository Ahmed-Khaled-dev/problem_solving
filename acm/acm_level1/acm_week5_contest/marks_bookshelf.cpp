#include <iostream>
#include <queue>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

int main() {
    fast();

    deque<long long> shelf;

    int books_count, pushing_side;
    long long book_id;
    cin >> books_count;

    for (int i = 0; i < books_count; i++)
    {
        cin >> pushing_side >> book_id;
        switch (pushing_side)
        {
        case 1:
            shelf.push_front(book_id);
            break;
        case 2:
            shelf.push_back(book_id);
            break;
        }
    }
    
    for (int i = 0; i < books_count; i++)
    {
        cout << shelf[i] << " ";
    }
    
    return 0;
}