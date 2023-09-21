/**
*    author:  Akayiz
*    created: 2023-09-20 23:34:01
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

// near, far, top, right, bottom, left
int dice_sides[7];

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

bool inBorders(int x, int y){
    return x >= 1 && y >= 1 && x <= 8 && y <= 8;
}

//bool visited[9][9];

queue<pair<int, int>> q;

void bfs(int x, int y){
    //visited[x][y] = 1;

    q.push({x, y});

    while(!q.empty()){
        tie(x, y) = q.front();
        q.pop();

        // 1 = right
        // 2 = left
        // 3 = forward
        // 4 = back
        for (int i = 1; i <= 4; i++)
        {
            int new_x = x + dx[i];
            int new_y = y + dy[i];

            if(inBorders(new_x, new_y)){
                if(i == 1){
                    dice_sides[3] = dice_sides[4];
                    int tmp = dice_sides[3];
                    dice_sides[4] = dice_sides[5];
                    dice_sides[5] = dice_sides[6];
                    dice_sides[6] = tmp;
                }
                if(i == 2){
                    dice_sides[3] = dice_sides[4];
                    int tmp = dice_sides[3];
                    dice_sides[4] = dice_sides[5];
                    dice_sides[5] = dice_sides[6];
                    dice_sides[6] = tmp;
                }
                if(i == 3){
                    dice_sides[3] = dice_sides[4];
                    int tmp = dice_sides[3];
                    dice_sides[4] = dice_sides[5];
                    dice_sides[5] = dice_sides[6];
                    dice_sides[6] = tmp;
                }
                if(i == 4){
                    dice_sides[3] = dice_sides[4];
                    int tmp = dice_sides[3];
                    dice_sides[4] = dice_sides[5];
                    dice_sides[5] = dice_sides[6];
                    dice_sides[6] = tmp;
                }
            }
        }
    }
}

int main() {
    Akayiz

    string start, end;
    cin >> start >> end;

    int start_x = start[1] - '0', start_y = start[0] - 'a' + 1;
    int end_x = end[1] - '0', end_y = end[0] - 'a' + 1;

    for (int i = 1; i <= 6; i++)
    {
        cin >> dice_sides[i];
    }
    
    return 0;
}