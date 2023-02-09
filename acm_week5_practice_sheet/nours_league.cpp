#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    map<string, int> team_points;
    string name;
    char state;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> name >> state;
        switch (state)
        {
        case 'W':
            team_points[name] += 3;
            break;
        case 'L':
            team_points[name] += 0;
            break;
        case 'D':
            team_points[name] += 1;
            break;
        }
    }

    int teams_count = team_points.size();
    cout << teams_count << endl;

    // Maps are sorted by default in acending order

    map<string, int>::iterator it;

    for (it = team_points.begin(); it != team_points.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
}