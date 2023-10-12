#include <iostream>
#include <map>
#include <set>
#include <algorithm>
#include <cmath>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

set<long long> player_1_balls;
set<long long> player_1_balls_inverse;
set<long long> player_2_balls;
set<long long> player_2_balls_inverse;
map<int, int> players_points;

int main() {
    fast();

    int rounds_count, action_type, player;
    cin >> rounds_count;
    
    long long ball_taken_value, ball_shown_value;

    for (int i = 0; i < rounds_count; i++)
    {
        cin >> action_type;
        int closest_higher_value_1 = 0, closest_smaller_value_1 = 0, closest_higher_value_2 = 0, closest_smaller_value_2 = 0;
        long long closest_value_1 = 10000000000, closest_value_2 = 10000000000;
        switch (action_type)
        {
        case 1:
            cin >> player >> ball_taken_value;
            if (player == 1)
            {
                player_1_balls.insert(ball_taken_value);
                player_1_balls_inverse.insert(ball_taken_value * -1);
            }
            else
            {
                player_2_balls.insert(ball_taken_value);
                player_2_balls_inverse.insert(ball_taken_value * -1);
            }
            break;
        case 2:
            cin >> ball_shown_value;
            
            if (player_1_balls.lower_bound(ball_shown_value) != player_1_balls.end())
            {
                closest_higher_value_1 = *player_1_balls.lower_bound(ball_shown_value);
                closest_value_1 = abs(closest_higher_value_1 - ball_shown_value);
            }
            if (player_1_balls_inverse.lower_bound(ball_shown_value * -1) != player_1_balls_inverse.end())
            {
                closest_smaller_value_1 = *(player_1_balls_inverse.lower_bound(ball_shown_value * -1));
                if (abs(closest_smaller_value_1 * -1 - ball_shown_value) < closest_value_1)
                {
                    closest_value_1 = abs(closest_smaller_value_1 * -1 - ball_shown_value);
                }
            }
            if (player_2_balls.lower_bound(ball_shown_value) != player_2_balls.end())
            {
                closest_higher_value_2 = *player_2_balls.lower_bound(ball_shown_value);
                closest_value_2 = abs(closest_higher_value_2 - ball_shown_value);
            }
            if (player_2_balls_inverse.lower_bound(ball_shown_value * -1) != player_2_balls_inverse.end())
            {
                closest_smaller_value_2 = *player_2_balls_inverse.lower_bound(ball_shown_value * -1);
                if (abs(closest_smaller_value_2 * -1 - ball_shown_value) < closest_value_2)
                {
                    closest_value_2 = abs(closest_smaller_value_2 * -1 - ball_shown_value);
                }
            }

            //cout << closest_higher_value_1 << " " << closest_smaller_value_1 << " " << closest_higher_value_2 << " " << closest_smaller_value_2 * -1 << endl;
            //cout << closest_value_1 << " " << closest_value_2 << endl;
            // Solve issues in the lines below
            //closest_value_1 = min(abs(closest_higher_value_1 - ball_shown_value), abs(closest_smaller_value_1 * -1 - ball_shown_value));
            //closest_value_2 = min(abs(closest_higher_value_2 - ball_shown_value), abs(closest_smaller_value_2 * -1 - ball_shown_value));
            
            if (closest_value_1 > closest_value_2)
            {
                players_points[2]++;
            }
            else if (closest_value_1 < closest_value_2)
            {
                players_points[1]++;
            }   
            break;
        }
    }

    //cout << players_points[1] << " " << players_points[2] << endl;
    if (players_points[1] > players_points[2])
    {
        cout << "Player1";
    }
    else if (players_points[1] < players_points[2])
    {
        cout << "Player2";
    }   
    else
    {
        cout << "Draw";
    }

    

    return 0;
}