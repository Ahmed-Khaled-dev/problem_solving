#include <iostream>

using namespace std;

void fast() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

bool visited[27] = {};
char letter;

int main() {
    int N, distinct = 0;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> letter;
        int current_index = (int)(letter - 'a');
        if (visited[current_index] == 0)
        {
            visited[current_index] = 1;
            distinct++;
        }
    }
    if (distinct % 2 == 0)
    {
        cout << "Continue";
    }
    else
    {
        cout << "Stop";
    }
}